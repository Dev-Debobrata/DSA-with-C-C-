#include <iostream>
using namespace std;

// Type casting is a feature to change the data_type of a variable

int main()
{
  int a = 45;
  float b = 45.44;

  cout << "The value of a is " << (float)a << endl; // Type Casting
  cout << "The value of a is " << float(a) << endl; // Type Casting

  cout << "The value of b is " << (int)b << endl; // Type Casting
  cout << "The value of b is " << int(b) << endl; // Type Casting

  return 0;
}