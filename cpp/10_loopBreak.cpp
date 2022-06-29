#include <iostream>
using namespace std;

// continue skips the value if conditions meet
// break breaks the loop if conditions meet

int main()
{
  int a = 1;
  for (int i = 0; i < 40; i++)
  {
    if (i == 2)
    {
      continue;
    }

    cout << i << endl;

    if (i == 34)
    {
      break;
    }
  }

  return 0;
}