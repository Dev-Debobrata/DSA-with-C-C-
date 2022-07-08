#include <iostream>
using namespace std;

// Function overloading: Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading.

int sum (int a, int b) {
  return a + b;
}

float sum (int a, int b, float c) {
  return a + b + c;
}

int main() {
  int a = 5, b = 6;
  float c = 3.65;

  cout << "Sum of a and b will be: " << sum(a, b) << endl;
  cout << "Sum of a and b and c will be: " << sum(a, b, c) << endl;
  
  return 0;
}