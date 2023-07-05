package DSA_With_Java.Algorithms.Sorting;

public class HeapSort {
  int array[];

  public HeapSort(int array[]) {
    this.array = array;
  }

  void heapify(int size, int mid) {
    int largest = mid;
    int l = 2 * mid + 1;
    int r = 2 * mid + 2;

    if (l < size && array[l] > array[largest])
      largest = l;

    if (r < size && array[r] > array[largest])
      largest = r;

    if (largest != mid) {
      int swap = array[mid];
      array[mid] = array[largest];
      array[largest] = swap;

      heapify(size, largest);
    }
  }

  /* A utility function to print array of size n */
  static void printArray(int arr[]) {
    int N = arr.length;

    for (int i = 0; i < N; ++i)
      System.out.print(arr[i] + " ");
    System.out.println();
  }

  public void sort() {
    int N = array.length;

    for (int i = N / 2 - 1; i >= 0; i--)
      heapify(N, i);

    for (int i = N - 1; i > 0; i--) {
      int temp = array[0];
      array[0] = array[i];
      array[i] = temp;

      heapify(i, 0);
    }
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
