#include <iostream>
using namespace std;

// & stores the address of a variable

int main()
{
  int x = 10;

  int &y = x;

  cout << x << endl;
  cout << y << endl;
}