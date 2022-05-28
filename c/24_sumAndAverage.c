# include <stdio.h>

void sumAndAverage(int x, int y, int *sum, float *avg) {
  *sum = x + y;

  *avg = (float) *sum / 2;
}

int main() {
  int a = 5 , b = 6, sum;
  float avg;

  // printf("Enter two numbers: ");
  // scanf("%d %d", &a, &b);

  sumAndAverage(a, b, &sum, &avg);

  printf("sum is %d\n", sum);
  printf("average is %f\n", avg);

  return 0;
}
