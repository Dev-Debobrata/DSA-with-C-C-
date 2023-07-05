package DSA_With_Java.Algorithms.Searching;

public class LinearSearch {
  int array[];
  int searchElement;

  public LinearSearch(int array[], int searchElement) {
    this.array = array;
    this.searchElement = searchElement;
  }

  public void search() {
    for (int i = 0; i < array.length; i++) {
      if (array[i] == searchElement) {
        System.out.println("The value is at index: " + i);
        return;
      } else {
        continue;
      }
    }
    System.out.println("The value does not exist in the array.");
  }
}
