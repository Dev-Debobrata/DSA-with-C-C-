# include <stdio.h>

void tenTimesValue(int *x) {
  int i = *x * 10;
  printf("ten times value is %d\n", i);
}

int main() {
  int a = 4;

  tenTimesValue(&a);

  return 0;
}