# include <stdio.h>
# include <string.h>

void occurrence (char * string, char ch) {
  int count = 0;

  for(int i = 0; i < strlen(string); i++) {
    if(string[i] == ch) {
      count++;
    }
  }
  printf("%d\n", count);
}

int main() {
  char str[] = "Hello World!";

  occurrence(str, 'l');

  return 0;
}