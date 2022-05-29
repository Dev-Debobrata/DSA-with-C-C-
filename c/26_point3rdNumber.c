# include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Third element of the pointer is %d\n", arr[2]);

  int *ptr = arr;
  ptr++;
  ptr++;

  printf("Pointer is pointing %d\n", *ptr);

  return 0;
}
