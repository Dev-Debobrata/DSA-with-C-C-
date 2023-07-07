#include <stdio.h>

void swap(int *val1, int *val2)
{
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void bubble_sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    printf("i = %d\n", arr[i]);
    for (int j = 0; j < size - i - 1; j++)
    {
      printf("comparing %d with %d\n", arr[i], arr[j]);
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(arr, size);

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}