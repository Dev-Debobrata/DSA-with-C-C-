# include <stdio.h>

int main() {
  int physics, chemistry, maths;

  printf("Enter your marks in physics, chemistry and maths: ");
  scanf("%d %d %d", &physics, &chemistry, &maths);

  int totalPercent = ((physics + chemistry + maths) / 300) * 100;

  if ((totalPercent < 40) || physics < 33 || chemistry < 33 || maths < 33) {
    printf("You failed!\n");
  } else {
    printf("You passed!\n");
  }

return 0;
}