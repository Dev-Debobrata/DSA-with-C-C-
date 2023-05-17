#include <stdio.h>

void swap(int *val1, int *val2)
{
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void quick_sort(int arr[], int size)
{
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  quick_sort(arr, size);

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}