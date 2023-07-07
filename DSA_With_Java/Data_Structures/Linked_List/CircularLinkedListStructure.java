package DSA_With_Java.Data_Structures.Linked_List;

class Node {
  public int element;
  public Node next;

  public Node(int element) {
    this.element = element;
    this.next = null;
  }
}

public class CircularLinkedListStructure {
  private Node head;

  public CircularLinkedListStructure() {
    this.head = null;
  }

  public void insertAtFront(int data) {
    Node newNode = new Node(data);
    if (head == null) {
      newNode.next = newNode; // Point to itself for the first node
    } else {
      newNode.next = head.next;
      head.next = newNode;
    }
    head = newNode;
  }

  public void deleteAtFront() {
    if (head == null) {
      System.out.println("List is empty");
      return;
    }
  }

  public void insertAtEnd(int data) {
    Node newNode = new Node(data);
    if (head == null) {
      head = newNode;
    } else {
      Node current = head;
      while (current.next != head) {
        current = current.next;
      }
      current.next = newNode;
      newNode.next = head;
    }
  }

  public void deleteAtEnd() {
    if (head == null) {
      System.out.println("List is empty");
    } else {
      Node current = head;
      while (current.next.next != head) {
        current = current.next;
      }
      current.next = head;
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

      newNode.next = current.next;
      current.next = newNode;
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

      current.next = current.next.next;
    }
  }

  public void display() {
    if (head == null) {
      System.out.println("List is empty.");
      return;
    } else {
      Node current = head;

      do {
        System.out.print(current.element + " ");
        current = current.next;
      } while (current != head);
      System.out.println();
    }
  }
}
