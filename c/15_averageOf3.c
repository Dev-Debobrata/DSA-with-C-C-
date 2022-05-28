# include <stdio.h>

int average (int a, int b, int c);

int main() {
  int j, k, l;
  
  printf("Enter the values:");
  scanf("%d %d %d", &j, &k, &l);
  
  int d = average(j, k, l);

  printf("Average is %d\n", d);

  return 0;
}

int average (int a, int b, int c) {
  int average;
  average = (a + b + c) / 3;
  return average;
};