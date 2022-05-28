# include <stdio.h>

int converter (int celcius);

int main() {
  int a;

  printf("Enter the value: ");
  scanf("%d", &a);

  int b = converter(a);

  printf("Farenheight equivalent of %d degree Celcius is %d\n", a, b);

  return 0;
}

int converter (int celcius) {
  int farenheight;
  
  farenheight = (celcius * 9 / 5) + 32;
  return farenheight;
}