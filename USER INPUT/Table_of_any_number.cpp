                                                          TABLE OF ANY NUMBER





PROBLEM:

/*                                                                      
Write a program to print the multiplication table of any number given by a user upto 10  
*/


Input : 4
Output:
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40

  
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num ;
  cout << num << " x 1 = " <<num * 1 <<endl;
  cout << num << " x 2 = " <<num * 2 <<endl;
  cout << num << " x 3 = " <<num * 3 <<endl;
  cout << num << " x 4 = " <<num * 4 <<endl;
  cout << num << " x 5 = " <<num * 5 <<endl;
  cout << num << " x 6 = " <<num * 6 <<endl;
  cout << num << " x 7 = " <<num * 7 <<endl;
  cout << num << " x 8 = " <<num * 8 <<endl;
  cout << num << " x 9 = " <<num * 9 <<endl;
  cout << num << " x 10 = " <<num * 10 <<endl;
  return 0;
}
