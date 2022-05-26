# include <stdio.h>

int main() {
  int factorial;

  printf("Enter a number: ");
  scanf("%d", &factorial);

  for (int i = factorial -1; i > 0; i--) {
    factorial *= i;
  }

  printf("Factorial is %d\n", factorial);

  return 0;
}