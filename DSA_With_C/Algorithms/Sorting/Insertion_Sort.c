#include <stdio.h>

void swap(int *val1, int *val2)
{
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void insertion_sort(int arr[], int size)
{
  int key, j;
  for (int i = 1; i < size - 1; i++)
  {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};

  int size = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, size);

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}