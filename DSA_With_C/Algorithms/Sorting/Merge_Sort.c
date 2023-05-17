#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
  int i = low, j = mid + 1, k = low;

  int temp[high];

  while (i <= mid && j <= high)
  {
    if (arr[i] <= arr[j])
    {
      temp[k] = arr[i];
      i++;
    }
    else
    {
      temp[k] = arr[j];
      j++;
    }
    k++;
  }

  if (i > mid)
  {
    while (j <= high)
    {
      temp[k] = arr[j];
      j++;
      k++;
    }
  }
  else
  {
    while (i <= mid)
    {
      temp[k] = arr[i];
      i++;
      k++;
    }
  }

  for (k = low; k <= high; k++)
  {
    arr[k] = temp[k];
  }
}

void merge_sort(int arr[], int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}

int main()
{
  int arr[] = {5, 2, 4, 6, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int low = 0;
  int high = size - 1;

  merge_sort(arr, low, high);

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}