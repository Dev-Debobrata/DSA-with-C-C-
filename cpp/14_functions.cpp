#include <iostream>
using namespace std;

//  Function Prototype: declare the function before the main function
// A void function performs a task, and then control returns back to the caller--but, it does not return a value.

int sum(int a, int b); // Function Prototype
void g(void);

int main()
{
  int num1, num2;

  cout << "Enter value 1 and value 2: ";
  cin >> num1 >> num2;

  cout << "The sum of the two values is: " << sum(num1, num2) << endl;

  void g(void);

  return 0;
}

int sum(int a, int b) // Function
{
  int c = a + b;
  return c;
}

void g() {
  cout << "hello" << endl;
}