package DSA_With_Java.Algorithms.Searching;

public class BinarySearch {
  int array[];
  int searchElement;
  int low;
  int high;

  public BinarySearch(int array[], int searchElement) {
    this.array = array;
    this.searchElement = searchElement;
    this.low = 0;
    this.high = array.length - 1;
  }

  public void search() {
    while (high > low) {
      int mid = (high + low) / 2;
      if (array[mid] == searchElement) {
        System.out.println("Element is at index: " + array[mid]);
        return;
      } else if (array[mid] > searchElement) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    System.out.println("Element does not exist on the array");
  }
}
