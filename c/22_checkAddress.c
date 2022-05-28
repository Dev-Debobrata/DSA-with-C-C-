# include <stdio.h>

void address (int x);

int main() {
  int a = 4;

  printf("address of variable a is %p\n", &a);
  address(a);

  return 0;
}

void address (int x) {
  printf("address of variable x is %p\n", &x);
}