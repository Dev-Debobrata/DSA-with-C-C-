#include <stdio.h>

void showVal (int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void indDeletion (int arr[], int size, int index) {
  for (int i = index; i < (size - 1) ; i++)
  {
    arr[i] = arr[i + 1];
  }
}

int main() {
  int arr[100] = {4, 6, 12, 65, 14 ,37};
  int index = 2, size = 6;

  showVal(arr, size);

  indDeletion(arr, size, index);

  size -= 1;
  showVal(arr, size);

  return 0;
}