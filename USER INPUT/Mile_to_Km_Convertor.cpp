                                                       MILE TO KILOMETER CONVERTOR




PROBLEM:

/*
Write a program which does the following
* Create a Convertor that converts miles into kilometers.(1 Mile = 1.60 KM)
* Create integer variables mile and km
* Accept user input and store it in mile
* Compute and output distance in kilometres - km to the console
*/

Sample 1:
Input : 106 
Output : 169 Kilometers


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int mile;
  int km;
  cin >> mile ;
  km = 1.60 * mile ;
  cout << km ;
  cout << " Kilometers";
  return 0;
}
