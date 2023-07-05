package DSA_With_Java;

import DSA_With_Java.Algorithms.Sorting.HeapSort;

public class Main {
  public static void main(String[] args) {
    int array[] = { 71, 2, 16, 98, 14, 18 };

    HeapSort sorting = new HeapSort(array);

    sorting.sort();
    sorting.display();
  }
}
