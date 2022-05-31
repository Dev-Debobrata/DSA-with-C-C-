# include <stdio.h>

typedef struct complexNumber {
    int real;
    int imaginary;
} comp;

void display (comp c) {
    printf("%d + %di\n", c.real, c.imaginary);
}

int main() {
  comp cnums[5];

  for(int i = 0; i < 5; i++) {
    printf("Enter real and imaginary parts of complex number %d: ", i+1);
    scanf("%d %d", &cnums[i].real, &cnums[i].imaginary);
  }

  for (int i = 0; i < 5; i++) {
    display(cnums[i]);
  }

  return 0;
}