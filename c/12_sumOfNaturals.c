# include <stdio.h>

int main() {
  int i, sum = 0;

  while (i <= 10) {
   sum += i;
   i++;
  }

  printf("Sum of first 10 natural numbers is %d\n", sum);

  return 0;
}