# include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int count = 0;

  for (int i = 0; i < 10; i++) {
    count = count + 1;
    printf("counting %d \n", count);
  }

  return 0;
}
