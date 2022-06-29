#include <iostream>
using namespace std;

// Arrays have same name and address
// Pointer arithmetic [new address = current address + (i * sizeOf(data_type))]

int main()
{
  int arr[] = {45, 44, 35, 55};
  int newArr[5];

  newArr[0] = 41;
  newArr[1] = 56;
  newArr[2] = 89;
  newArr[3] = 22;
  newArr[4] = 36;

  cout << arr[0] << endl;
  cout << newArr[1] << endl;
  cout << arr[2] << endl;
  cout << newArr[3] << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << "The value of " << i << "th number is " << newArr[i] << endl;
  }

  // Using do-while
  int i = 0;
  do
  {
    cout << newArr[i] << endl;
    i++;
  } while (i <= 4);

  // pointers and arrays
  int *p = newArr;
  cout << "The value of newArr[0] is: " << *p << endl;
  cout << "The value of newArr[2] is: " << *(p + 2) << endl;
  cout << "The address of newArr[0] is: " << p << endl;
  cout << "The address of newArr[2] is: " << (p + 2) << endl;

  return 0;
}