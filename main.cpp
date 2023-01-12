// This file contains the 'main' function. Program execution starts and ends
// here.

#include <iostream>
using namespace std;

int main() {
  int x = 999;
  double y = 42.5;
  bool Answer = true;

  // << = LeftShift
  // >> = rightShift
  // endl = endline
  // cout = object of iostream which is used to display things on an output
  // device NaN = not a number



  int yy = 3;
  int aa = 6;
  int b = 4;
  int c = 7;
  int d = 2;
  
  x = yy + (aa + b) * 2 / (c-d);

  float bmi = 0;
  float weight = 72;
  float height = 1.86;

  bmi = weight / (height * height);

  

  cout << "The value of x is " << x << endl;
  cout << "This is a section of text "
       << " and this is another" << endl;
  cout << "The value of y is " << y << endl;
  cout << "The value of Answer is " << Answer << endl;

  cout << "BMI = " << bmi << endl;
}

 