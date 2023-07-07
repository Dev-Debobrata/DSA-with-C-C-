package DSA_With_Java.Algorithms.Sorting;

public class QuickSort {
  int array[];

  public QuickSort(int array[]) {
    this.array = array;
  }

  void swap(int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }

  public int partition(int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
      if (array[j] < pivot) {
        i++;
        swap(i, j);
      }
    }

    swap(i + 1, high);
    return (i + 1);
  }

  public void sort(int low, int high) {
    if (low < high) {
      int pivot = partition(low, high);

      sort(low, pivot - 1);
      sort(pivot + 1, high);
    }
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
