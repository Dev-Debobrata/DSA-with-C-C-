# include <stdio.h>

int main() {
  int a; 

  printf("Enter the number for the table: ");
  scanf("%d", &a);

  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", a, i, a * i);
  }

  return 0;
}