package DSA_With_Java.Algorithms.Sorting;

public class BubbleSort {
  int array[];

  public BubbleSort(int array[]) {
    this.array = array;
  }

  void swap(int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }

  public void sort() {
    for (int i = 0; i < array.length; i++) {
      for (int j = 0; j < array.length - i - 1; j++) {
        if (array[j] > array[j + 1]) {
          swap(j, j + 1);
        } else {
          continue;
        }
      }
    }
    return;
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
