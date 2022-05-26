# include <stdio.h>

int main() {
  int celcius, farenheight;

  printf("enter the value of celcius: \n");
  scanf("%d", &celcius);

  farenheight = (celcius * 9 / 5) + 32;

  printf("farenheight is: %d\n", farenheight);
}