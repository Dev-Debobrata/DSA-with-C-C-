# include <stdio.h>

void slice( char * str, int m, int n ) {
  int i = 0;
  
  while((m + i) < n) {
    str[i] = str[i + m];
    i++;
  }
  str[i] = '\0';
}

int main() {
  char str[] = "Hello World!";

  slice(str, 0, 4);

  printf("%s\n", str);
  return 0;
}