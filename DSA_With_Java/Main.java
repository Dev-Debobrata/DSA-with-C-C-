package DSA_With_Java;

import DSA_With_Java.Data_Structures.Linked_List.DoublyLinkedListStructure;

public class Main {
  public static void main(String[] args) {
    DoublyLinkedListStructure linkedList = new DoublyLinkedListStructure();

    linkedList.insertAtFront(8);
    linkedList.insertAtEnd(10);
    linkedList.insertAtEnd(15);
    linkedList.insertAtEnd(20);
    linkedList.insertAtEnd(72);
    linkedList.insertAtIndex(2, 69);
    linkedList.display();
    linkedList.deleteAtIndex(3);

    linkedList.display();
  }
}
