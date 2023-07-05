package DSA_With_Java.Algorithms.Sorting;

public class SelectionSort {
  int array[];

  public SelectionSort(int array[]) {
    this.array = array;
  }

  void swap(int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }

  public void sort() {
    for (int i = 0; i < array.length; i++) {
      int min = i;
      for (int j = i; j < array.length; j++) {
        if (array[j] < array[min]) {
          swap(min, j);
        } else {
          continue;
        }
      }
      swap(i, min);
    }
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
