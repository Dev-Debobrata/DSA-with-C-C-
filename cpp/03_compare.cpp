#include <iostream> // Handles I/O


using namespace std;

int main() {
  int num1, num2;

  cout << "Enter the tow numbers: ";
  cin >> num1 >> num2;

  if (num1 > num2) {
    cout << "num1 is greater than num2" << endl;
  } else if (num2 > num1) {
    cout << "num2 is greater than num1" << endl;
  } else {
    cout << "num1 and num2 are equal" << endl;
  }
  
  return 0;
}