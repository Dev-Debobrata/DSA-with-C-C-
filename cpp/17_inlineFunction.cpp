#include <iostream>
using namespace std;

// inline function doesn't revoke every time when it is called, instead it replaces the call with the value in the compiler. But it takes toll in the cache.

inline int product(int a, int b)
{
  return a * b;
}

int main()
{
  int a = 5, b = 5;

  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;
  cout << "Product of a & b is: " << product(a, b) << endl;

  return 0;
}