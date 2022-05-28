# include <stdio.h>

int main() {
  int i = 5;
  int *p1 = &i;
  int **p2 = &p1;

  printf("value of i is %d\n", *p1);
  printf("address of i is %p\n", &p1);
  printf("address of p1 is %p\n", &p2);

  return 0;
}