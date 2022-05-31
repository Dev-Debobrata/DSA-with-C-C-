# include <stdio.h>
# include <string.h>

int lenCount(char * str) {
  char *ptr = str;
  int count = 0;

  while(*ptr != '\0') {
    count++;
    ptr++;
  }
  return count;
}

int main () {
  char str[] = "Hello World!";

  int i = lenCount(str); 
  
  printf("Length of the string is %d\n", i);
  return 0;
}
