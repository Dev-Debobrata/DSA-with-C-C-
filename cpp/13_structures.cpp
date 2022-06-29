#include <iostream>
using namespace std;

// struct allocates total memory of all the data_types inside it and you can use all the data.
// union only allocates the memory of the biggest data_type and you can only use on data at a time.
// An enumeration(enum) is a user-defined data type that consists of integral constants.

typedef struct marks
{
  float marks;
  bool passed;
} marks;

union grades
{
  char grade;
  int roll;
};

enum days
{
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};

int main()
{
  struct marks destructor;
  union grades shad;
  days today;

  destructor.marks = 88;
  destructor.passed = true;

  shad.grade = 'c';
  shad.roll = 112;

  today = wednesday;

  cout << destructor.marks << endl;

  cout << shad.grade << endl; // It will provide garbage value
  cout << shad.roll << endl;

  cout << "Today is the " << (today + 1) << "th day of the week." << endl;

  return 0;
}