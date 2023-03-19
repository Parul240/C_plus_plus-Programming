STATEMENT

/*
If we want to introduce decimal values we use the double keyword before declaring the variable.

Write a program which does the following:

* Find the area of a circle whose radius is 8.9 cm. Take pi = 3.14
* Declare variables radius, pi and area and assign the relevant values to them
* Note: Area of a circle is Pi × radius^2
*/


SOLUTION

#include <bits/stdc++.h>
using namespace std;

int main() {
  double pi = 3.14 ;
  double radius = 8.9 ;      //radius has to be declared as a 'double'
  double area = pi * radius * radius;
  cout << "The Area of the given Circle is ";
  cout << area;
  
  return 0;
}
