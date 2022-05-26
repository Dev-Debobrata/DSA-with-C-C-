# include <stdio.h>

int main() {
  float income;

  printf("Enter your income in lakhs: ");
  scanf("%f", &income);

  if (income > 2.5 && income <= 5.0) {
    printf("Your tax will be %f", (income * 5) / 100);
  } else if (income > 5.0 && income <= 10) {
    printf("Your tax will be %f", (income * 20) / 100);
  } else if (income > 10.0) {
    printf("Your tax will be %f", (income * 30) / 100);
  } else {
    printf("There is not tax below 2.5 lakhs");
  }

  return 0;
}