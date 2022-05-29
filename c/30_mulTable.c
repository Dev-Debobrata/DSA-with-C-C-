# include <stdio.h>

int main() {
  int arr[3][10];

  for (int i = 0; i < 10; i++) {
    arr[0][i] = (i + 1) * 2;
    arr[1][i] = (i + 1) * 7;
    arr[2][i] = (i + 1) * 9;
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[j][i]);
    }
    printf("\n");
  }

  return 0;
}