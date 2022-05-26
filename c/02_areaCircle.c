# include <stdio.h>

int main() {
  const float pi = 3.14;

  int radius;

  printf ("enter the value of radius: \n");
  scanf("%d", &radius);

  printf("area of the circle is: %f\n", pi * radius * radius);
}