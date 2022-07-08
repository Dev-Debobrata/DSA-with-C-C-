#include <iostream>
using namespace std;

int fibonacciValue (int element) {
  if ( element < 2) {
    return element;
  } else {
    return fibonacciValue(element - 1) + fibonacciValue(element - 2);
  }
}

int main() {
  int number;

  cout << "Enter the element of the fibonacci sequence: " << endl;
  cin >> number;

  cout << "The fibonacci value of the " << number << "th element is: "<< fibonacciValue(number) << endl;
  
  return 0;
}