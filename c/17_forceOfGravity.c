# include <stdio.h>

int forceOfGravity (int m);

int main() {
  int a;

  printf("Enter the mass in kg: ");
  scanf("%d", &a);

  int b = forceOfGravity(a);

  printf("Force of gravity is %d N\n", b);

  return 0;
}

int forceOfGravity (int m) {
  int f, g = 9.8;
  f = m * g;
  return f;
}