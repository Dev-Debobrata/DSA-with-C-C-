package DSA_With_Java.Data_Structures.Linked_List;

class Node {
  public int element;
  public Node next;
  public Node previous;

  public Node(int element) {
    this.element = element;
    this.next = null;
    this.previous = null;
  }
}

public class DoublyLinkedListStructure {
  private Node head;

  public DoublyLinkedListStructure() {
    this.head = null;
  }

  public void insertAtFront(int data) {
    Node newNode = new Node(data);
    newNode.next = head;
    if (head != null) {
      head.previous = newNode;
    }
    newNode.previous = null;
    head = newNode;
  }

  public void deleteAtFront() {
    if (head == null) {
      System.out.println("List is empty");
      return;
    }

    head = head.next;
    head.previous = null;
  }

  public void insertAtEnd(int data) {
    Node newNode = new Node(data);
    if (head == null) {
      head = newNode;
    } else {
      Node current = head;
      while (current.next != null) {
        current = current.next;
      }
      current.next = newNode;
      newNode.previous = current;
    }
  }

  public void deleteAtEnd() {
    if (head == null) {
      System.out.println("List is empty");
      return;
    } else {
      Node predecessor = head;
      Node successor = predecessor.next;
      while (successor.next != null) {
        predecessor = predecessor.next;
        successor = successor.next;
      }
      predecessor.next = null;
    }
  }

  public void insertAtIndex(int index, int data) {
    int position = 0;
    Node newNode = new Node(data);

    if (head == null) {
      System.out.println("List is empty");
      return;
    } else {
      Node current = head;

      while (position < index - 1) {
        if (current.next == null) {
          System.out.println("Index does not exist");
        } else {
          current = current.next;
          position++;
        }
      }
      Node currentNext = current.next;

      newNode.next = current.next;
      newNode.previous = current;
      current.next = newNode;
      currentNext.previous = newNode;
    }
  }

  public void deleteAtIndex(int index) {
    int position = 0;

    if (head == null) {
      System.out.println("List is empty");
      return;
    } else {
      Node current = head;
      while (position < index - 1) {
        if (current.next == null) {
          System.out.println("Index does not exist");
          return;
        }
        current = current.next;
        position++;
      }

      if (current.next == null) {
        System.out.println("Index does not exist");
        return;
      }

      Node currentNextNext = current.next.next;
      current.next = currentNextNext;
      currentNextNext.previous = current;
    }
  }

  public void display() {
    if (head == null) {
      System.out.println("List is empty.");
      return;
    }
    Node current = head;
    while (current != null) {
      System.out.print(current.element + " ");
      current = current.next;
    }
    System.out.println();
  }
}
