# include <stdio.h>

void encryption (char * str) {
  while(*str != '\0') {
    *str = *str + 1;
    str++;
  }
}

int main() {
  char str[] = "Hello World!";

  encryption(str);

  printf("%s\n", str);

  return 0;
}