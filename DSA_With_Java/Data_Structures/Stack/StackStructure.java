package DSA_With_Java.Data_Structures.Stack;

public class StackStructure {
  private int[] stack;
  private int top;
  private int size;

  public StackStructure(int size) {
    this.size = size;
    this.stack = new int[this.size];
    this.top = -1;
  }

  public boolean isEmpty() {
    return this.top == -1;
  }

  public boolean isFull() {
    return this.top == this.size - 1;
  }

  public void push(int data) {
    if (this.isFull()) {
      System.out.println("Stack is full");
      return;
    }

    this.stack[++this.top] = data;
  }

  public int pop() {
    if (this.isEmpty()) {
      System.out.println("Stack is empty");
      return -1;
    }

    return this.stack[this.top--];
  }

  public void peek() {
    if (this.isEmpty()) {
      System.out.println("Stack is empty");
    }

    System.out.println(this.stack[this.top]);
  }

  public void display() {
    if (this.isEmpty()) {
      System.out.println("Stack is empty");
      return;
    }

    for (int i = this.top; i >= 0; i--) {
      System.out.println(this.stack[i]);
    }
  }
}
