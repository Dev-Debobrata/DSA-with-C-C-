#include <iostream>
using namespace std;

// Here interest is a default value, if you pass the interest argument while calling the function, the compiler will accept your value else the compiler will use default value.
// Constant arguments are special arguments where the value of the argument cannot be changed. Using it only with reference variables or pointers are recommended.

float bankInterest(float money, float interest = 4.56)
{
  return money + ((money * interest) / 100);
}

int main()
{
  float p;

  cout << "Enter your money: " << endl;
  cin >> p;

  cout << "If you deposit Rs" << p << ", you will get Rs" << bankInterest(p) << " after 1 year." << endl;
  cout << "For senior citizens, if you deposit Rs" << p << ", you will get Rs" << bankInterest(p, 9) << " after 1 year." << endl;

  return 0;
}