# include <stdio.h>

int main() {
  const float interest = 6.5;

  int principal, time;

  printf("enter the value of principal: \n");
  scanf("%d", &principal);

  printf("enter the value of time: \n");
  scanf("%d", &time);

  printf("interest is: %f\n", principal * interest * time / 100); 
}