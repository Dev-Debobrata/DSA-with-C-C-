#include <stdio.h>

void swap(int *val1, int *val2)
{
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void selection_sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < size - 1; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }
    if (min_index != i)
    {
      swap(&arr[min_index], &arr[i]);
    }
  }
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, size);

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}