# include <stdio.h>
#include <string.h>

typedef struct coordinates {
    int x;
    int y;
} vector;

int main() {
  vector v1 = {1, 2};

  printf("%d %d\n", v1.x, v1.y);
}