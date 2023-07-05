package DSA_With_Java.Algorithms.Sorting;

public class InsertionSort {
  int array[];

  public InsertionSort(int array[]) {
    this.array = array;
  }

  void swap(int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }

  public void sort() {
    for (int i = 1; i < array.length; i++) {
      int key = array[i];
      int j = i - 1;

      while (j >= 0 && array[j] > key) {
        array[j + 1] = array[j];
        j = j - 1;
      }
      array[j + 1] = key;
    }
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
