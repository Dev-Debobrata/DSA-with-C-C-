#include <stdio.h>

void binary_search(int arr[], int size)
{
  int value, low, mid, high;
  low = 0;
  high = size - 1;

  printf("Enter the value you want to find: ");
  scanf("%d", &value);

  while (low <= high)
  {
    mid = (low + high) / 2;

    if (arr[mid] == value)
    {
      printf("%d is in the array at index %d\n", value, mid);
      return;
    }
    if (arr[mid] < value)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  printf("%d is not found in the array\n", value);
}

int main()
{
  int arr[10] = {10, 12, 16, 26, 34, 35, 74, 78, 88, 99};

  binary_search(arr, 10);

  return 0;
}