# include <stdio.h>

int main() {
  char ch;
  FILE *fp, *fp2;

  fp = fopen("files/character.txt", "r");
  fp2 = fopen("files/character2.txt", "w");
  
  char c = fgetc(fp);
  while(c != EOF) {
    fputc(c, fp2);
    fputc(c, fp2);

    c = fgetc(fp);
  }
  
  fclose(fp);
  fclose(fp2);

  printf("Done!\n");

  return 0;
}