#include <iostream>
using namespace std;

int main()
{
  int a = 3;

  // & --> address of (address of) operator
  // * --> dereferencing (value at) operator

  int *b = &a;

  cout << a << endl;  // 3 [Value of a]
  cout << b << endl;  // 0x7fffe68030bc [Address of a]
  cout << *b << endl; // 3 [value of a]

  // pointer to pointer
  int **c = &b;

  cout << c << endl;   // 0x7fffe68030c0 [Address of b]
  cout << *c << endl;  // 0x7fffe68030bc [Address of a]
  cout << **c << endl; // 3 [Value of a]

  int ***d = &c;

  cout << d << endl;    // 0x7fffe68030c8 [Address of c]
  cout << *d << endl;   // 0x7fffe68030c0 [Address of b]
  cout << **d << endl;  // 0x7fffe68030bc [Address of a]
  cout << ***d << endl; // 3 [Value of a]

  return 0;
}