package DSA_With_Java.Data_Structures.Queue;

public class QueueStructure {
  private int[] queue;
  private int front;
  private int rear;
  private int size;

  public QueueStructure(int size) {
    this.size = size;
    this.queue = new int[this.size];
    this.front = -1;
    this.rear = -1;
  }

  public boolean isEmpty() {
    return this.front == -1;
  }

  public boolean isFull() {
    return this.rear == this.size - 1;
  }

  public void enqueue(int data) {
    if (this.isFull()) {
      System.out.println("Queue is full");
      return;
    }

    if (this.isEmpty()) {
      this.front = 0;
    }

    this.queue[++this.rear] = data;
  }

  public int dequeue() {
    if (this.isEmpty()) {
      System.out.println("Queue is empty");
      return -1;
    }

    int data = this.queue[this.front];

    if (this.front == this.rear) {
      this.front = -1;
      this.rear = -1;
    } else {
      this.front++;
    }

    return data;
  }

  public void peek() {
    if (this.isEmpty()) {
      System.out.println("Queue is empty");
    }

    System.out.print(this.queue[this.front] + " " + this.queue[this.rear]);
    System.out.println();
  }

  public void display() {
    if (this.isEmpty()) {
      System.out.println("Queue is empty");
      return;
    }

    for (int i = this.front; i <= this.rear; i++) {
      System.out.println(this.queue[i]);
    }
  }
}
