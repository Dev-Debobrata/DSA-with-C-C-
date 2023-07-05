package DSA_With_Java.Algorithms.Sorting;

public class MergeSort {
  int array[];

  public MergeSort(int array[]) {
    this.array = array;
  }

  public void merge(int left, int middle, int right) {
    int size1 = middle - left + 1;
    int size2 = right - middle;

    int arrayLeft[] = new int[size1];
    int arrayRight[] = new int[size2];

    for (int i = 0; i < size1; ++i)
      arrayLeft[i] = array[left + i];
    for (int j = 0; j < size2; ++j)
      arrayRight[j] = array[middle + 1 + j];

    int i = 0, j = 0;

    int k = left;
    while (i < size1 && j < size2) {
      if (arrayLeft[i] <= arrayRight[j]) {
        array[k] = arrayLeft[i];
        i++;
      } else {
        array[k] = arrayRight[j];
        j++;
      }
      k++;
    }
    while (i < size1) {
      array[k] = arrayLeft[i];
      i++;
      k++;
    }
    while (j < size2) {
      array[k] = arrayRight[j];
      j++;
      k++;
    }
  }

  public void sort(int left, int right) {
    if (left < right) {
      int middle = left + (right - left) / 2;
      sort(left, middle);
      sort(middle + 1, right);

      merge(left, middle, right);
    }
  }

  public void display() {
    for (int i = 0; i < array.length; i++) {
      System.out.print(array[i] + " ");
    }
    System.out.println();
  }
}
