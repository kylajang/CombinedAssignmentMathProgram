#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#include <math.h>

using std::cout;
using std::endl;
using std::srand;
using std::rand;

int main ()
{
// Declaring my variables
  int a, squared;
  float x;
  double result;
  int b = -7;

// Creating a random number generator from 0-999
  srand(time(0));
  a = rand() % 1000;
  cout << "The unaltered value is: " << a << endl;

// Finding sin and tan of the variable
  result = sin(a);
  cout << "The sin of the value is: " << result << endl;
  result = tan(a);
  cout << "The tan of the value is: " << result << endl;

// Finding the square root of the variables
  result = sqrt(a);
  cout << "The square root of the value is: " << result << endl;
  squared = a * a;
  cout << "The squared value is: " << squared << endl;
  x = pow(a,25);
  cout << "The 25th power of the value is: " << pow(a, 25) << endl;

// Absolute value
  b = abs(b);
  cout << "The absolute value of -7 is: " << b << endl;

  return 0;
}
