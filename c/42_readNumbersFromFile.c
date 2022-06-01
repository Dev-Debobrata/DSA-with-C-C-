# include <stdio.h>

int main() {
  int a, b, c;
  FILE *fp;

  fp = fopen("files/numbers.txt", "r");
  fscanf(fp, "%d %d %d", &a, &b, &c);
  fclose(fp);

  printf("The numbers inside the file are: %d %d %d\n", a, b, c);
  
  return 0;
}