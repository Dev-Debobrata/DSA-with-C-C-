# include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int number, guess;
  srand(time(0));
  number = rand() % 100 + 1;

  do {
    printf("Guess the number: ");
    scanf("%d", &guess);
    if (guess > number) {
      printf("Too high!\n");
    } else if (guess < number) {
      printf("Too low!\n");
    } else {
      printf("You guessed it!\n");
    }
  } while (guess != number);


  return 0;
}