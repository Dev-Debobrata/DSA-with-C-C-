# include <stdio.h>

int main() {
  int a = 5;
  int *b = &a;

  printf("value of variable a is %d\n", *b);
  printf("Address of variable a is %p\n", &a);

  return 0;
}