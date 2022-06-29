#include <iostream>
using namespace std;

// Normally a function takes two argument and copies it and the returns the value as the answer, hence the values of the original variables doesn't change.
// But to swap two variables we can't copy it as we have to change the values of the original variables.
// So we take the memory location of the variables. That way the function will change the values because it is using physical memory instead of values and memory cannot be copied. This is called call by reference.

void swap (int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5, b = 8;

  cout << "Value of a before swap is: " << a << endl;
  cout << "Value of b before swap is: " << b << endl;

  swap(&a, &b);

  cout << "Value of a after swap is: " << a << endl;
  cout << "Value of b after swap is: " << b << endl;

  return 0;
}