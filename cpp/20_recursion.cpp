#include <iostream>
using namespace std;

// Recursion is a concept where a function can be called within itself and it will keep calling itself until the conditions are met.

int factorial (int n) {
  if ( n <= 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int number;

  cout << "Enter the number to calculate factorial" << endl;
  cin >> number;

  cout << "The factorial of " << number << " is: " << factorial(number) << endl;
  
  return 0;
}