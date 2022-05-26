# include <stdio.h>

int main() {
  int base, height;

  printf("enter the value of base: \n");
  scanf("%d", &base);

  printf("enter the value of height: \n");
  scanf("%d", &height);

  printf("area of the triangle is: %d\n", (base * height) / 2);
  
  return 0;
}