# include <stdio.h>

void decrypt (char * str) {
  while(*str != '\0') {
    *str = *str - 1;
    str++;
  }
}

int main() {
  char str[] = "Ifmmp!Xpsme";

  decrypt(str);

  printf("%s\n", str);

  return 0;
}