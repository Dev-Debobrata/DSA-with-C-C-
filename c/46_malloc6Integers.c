# include <stdio.h>
# include <stdlib.h>

int main() {
  int *ptr;
  int sum = 0;

  ptr = (int *) malloc(6 * sizeof(int));

  for (int i = 0; i < 6; i++) {
    printf("Enter %d integer: ", i + 1);
    scanf("%d", ptr + i);
  }

  free(ptr);

  return 0;
}