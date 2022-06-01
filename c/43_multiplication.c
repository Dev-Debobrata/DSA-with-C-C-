# include <stdio.h>

int main() {
  int n;
  FILE *fp;

  printf("Enter a number: ");
  scanf("%d", &n);

  fp = fopen("files/table.txt", "w");

  for (int i = 1; i <= 10; i++) {
    fprintf(fp, "%d * %d = %d\n", n, i, n * i);
  }

  fclose(fp);
  printf("Done!\n");

  return 0;
}