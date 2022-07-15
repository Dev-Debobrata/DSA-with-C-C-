#include <stdio.h>

void linear_search (int *arr, int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      printf("%d found at index %d\n", value, i);
      return;
    }
  }
  printf("%d not found\n", value);
}

void search_value (int *arr, int size) {
  int value;

  printf("Enter the value you want to find: ");
  scanf("%d", &value);

  linear_search(arr, size, value);

}

int main() {
  int arr[10] = {10, 12, 56, 76, 34, 35, 74, 38, 88, 29};

  search_value(arr, 10);

  return 0;
}