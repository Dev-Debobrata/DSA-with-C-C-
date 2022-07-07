#include <stdio.h>
#include <stdlib.h>

typedef struct myArray // Abstract Data Type(ADT)
{
  int total_size;
  int used_size;
  int *ptr;
} myArray;

void createArray(myArray *a, int tSize, int uSize)
{
  (*a).total_size = tSize;
  (*a).used_size = uSize;
  (*a).ptr = (int *)malloc(tSize * sizeof(int));
};

void getVal (myArray *a) {
  for (int i = 0; i < (*a).used_size; i++) {
    printf("%d\n", ((*a).ptr)[i]);
  }
}

void setVal (myArray *a) {
  int n;
  
  for (int i = 0; i < (*a).used_size; i++) {
    printf("Enter element %d: ", i);
    scanf("%d", &n);
    ((*a).ptr)[i] = n;
  }
}

int main() {
  myArray marks;

  createArray(&marks, 10, 2);

  printf("We are running setVal now\n");
  setVal(&marks);

  printf("We are running getVal now\n");
 getVal(&marks);

  return 0;
}