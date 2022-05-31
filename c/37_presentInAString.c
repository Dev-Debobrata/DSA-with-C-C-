# include <stdio.h>
#include <string.h>

void present (char * str, char ch) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == ch) {
      printf("%c is present\n", ch);
      break;
    }
  }
}

int main() {
  char str[] = "Hello World!";

  present(str, 'l');

  return 0;
}