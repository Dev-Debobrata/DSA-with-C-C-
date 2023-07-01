package DSA_With_Java.Data_Structures.Array;

public class ArrayStructure {
  private int[] array;
  private int size;

  public ArrayStructure(int capacity) {
    array = new int[capacity];
    size = 0;
  }

  public void insertAtFront(int element) {
    if (size == array.length) {
      System.out.println("Array is full. Cannot insert element.");
      return;
    }

    for (int i = size - 1; i >= 0; i--) {
      array[i + 1] = array[i];
    }

    array[0] = element;
    size++;
  }

  public void deleteAtFront() {
    if (size == 0) {
      System.out.println("Array is empty. Cannot delete element.");
      return;
    }

    for (int i = 0; i < size - 1; i++) {
      array[i] = array[i + 1];
    }

    size--;
  }

  public void insertAtIndex(int index, int element) {
    if (size == array.length) {
      System.out.println("Array is full. Cannot insert element.");
      return;
    }

    if (index < 0 || index > size) {
      System.out.println("Invalid index. Cannot insert element.");
      return;
    }

    for (int i = size - 1; i >= index; i--) {
      array[i + 1] = array[i];
    }

    array[index] = element;
    size++;
  }

  public void deleteAtIndex(int index) {
    if (size == 0) {
      System.out.println("Array is empty. Cannot delete element.");
      return;
    }

    if (index < 0 || index >= size) {
      System.out.println("Invalid index. Cannot delete element.");
      return;
    }

    for (int i = index; i < size - 1; i++) {
      array[i] = array[i + 1];
    }

    size--;
  }

  public void insertAtEnd(int element) {
    if (size == array.length) {
      System.out.println("Array is full. Cannot insert element.");
      return;
    }

    array[size] = element;
    size++;
  }

  public void deleteAtEnd() {
    if (size == 0) {
      System.out.println("Array is empty. Cannot delete element.");
      return;
    }

    size--;
  }

  public void printArray() {
    System.out.print("Array: ");
    for (int element : array) {
      System.out.print(element + " ");
    }
    System.out.println();
  }
}
