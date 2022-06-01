# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>

int main() {
  char *choices[] = {"rock", "paper", "scissor"};
  int youChoice;
  int aiChoice = 0;

  printf("Enter your choice (note 0 = rock, 1 = paper, 2 = scissor): ");
  scanf("%d", &youChoice);
  
  srand(time(0));
  aiChoice = rand() % 3;

  printf("AI's choice: %s\n", choices[aiChoice]);

  if (youChoice == aiChoice) {
    printf("Draw!\n");
  } else if ((youChoice == 0 && aiChoice == 1) || (youChoice == 1 && aiChoice == 2) || (youChoice == 2 && aiChoice == 0)) {
    printf("AI wins!\n");
  } else {
    printf("You win!\n");
  }

  return 0;
}