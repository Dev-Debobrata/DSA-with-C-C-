#include <iostream>
using namespace std;

// Here we are using reference variables

void swapReference(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 4;
  int b = 9;

  cout << "Value of a and b before swap: " << a << b << endl;
  swapReference(a, b);
  cout << "Value of a and b after swap: " << a << b << endl;

  return 0;
}