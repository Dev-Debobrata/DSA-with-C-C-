# include <stdio.h>

int sum (int n);

int main() {
  int z;

  printf("Enter the value: ");
  scanf("%d", &z);

  int j = sum(z);

  printf("%dth sum is %d\n", z, j);

  return 0;
}

int sum (int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + sum(n - 1);
  }
}