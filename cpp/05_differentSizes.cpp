#include <iostream>
using namespace std;

// int = 4bytes, char = 1byte, float = 4byte, double = 8bytes, long double = 16bytes

int main()
{
  float a = 34.4F;
  long double b = 34.4L;

  cout << "Size of 34.4 is " << sizeof(34.4) << endl;
  cout << "Size of 34.4f is " << sizeof(34.4f) << endl;
  cout << "Size of 34.4F is " << sizeof(34.4F) << endl;
  cout << "Size of 34.4l is " << sizeof(34.4l) << endl;
  cout << "Size of 34.4L is " << sizeof(34.4L) << endl;

  return 0;
}