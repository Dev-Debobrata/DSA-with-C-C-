#include <iostream>
using namespace std;

int product(int a, int b)
{
  static int c = 0; // This only executes only once int the program.
  c = c + 1;        // Value of c increases every time the function is called.
  return a * b + c;
}

int main()
{
  int a = 5, b = 4;

  cout << "The product is: " << product(a, b) << endl;
  cout << "The product is: " << product(a, b) << endl;
  cout << "The product is: " << product(a, b) << endl;
  cout << "The product is: " << product(a, b) << endl;

  return 0;
}