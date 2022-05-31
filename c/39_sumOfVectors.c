# include <stdio.h>

typedef struct values {
    int x;
    int y;
} vector;

void sum (vector v1, vector v2, vector *v3) {
    v3->x = v1.x + v2.x;
    v3->y = v1.y + v2.y;
}

int main() {
  vector v1 = {1, 2};
  vector v2 = {3, 4};
  vector v3;

  sum(v1, v2, &v3);

  printf("%d %d\n", v3.x, v3.y);

  return 0;
}