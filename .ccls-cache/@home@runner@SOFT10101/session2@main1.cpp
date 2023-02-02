#include <iostream>
using namespace std;

int main() {
  int aInt;
  cin >> aInt; // This gets the user input from the keyboard
  if (aInt = 100)
    cout << "Number is too high ";

  float aFloat = 4.9;

  // Print out the starting value
  cout << "Starting value for aFloat is " << aFloat << endl;
  int bInt = 0;

  bInt = (aFloat / 2) - 1;

  if (bInt == 1) {
    cout << "Result is: ";
    cout << aFloat / 2;
  }
}