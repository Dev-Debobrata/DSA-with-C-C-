# include <stdio.h>

void strCpy (char * str1, char * str2) {
  int i = 0;
  while(str2[i] != '\0') {
    str1[i] = str2[i];
    i++;
  }
  str1[i] = '\0';
}

int main() {
  char str1[] = "";
  char str2[] = "Hello World!";

  strCpy(str1, str2);

  printf("%s\n", str1);


  return 0;
}