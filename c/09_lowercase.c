# include <stdio.h>

int main() {
  char a;

  printf("Enter a character: ");
  scanf("%c", &a);

  if (a >= 'a' && a <= 'z') {
    printf("%c is a lowercase letter", a);
  } else {
    printf("%c is not a lowercase letter", a);
  }

  return 0;
}