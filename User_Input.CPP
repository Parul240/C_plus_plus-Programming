                                                              1. User Input
                                                              
                                                              
You have already learned that cout is used to output (print) values.
Now we will use cin to get user input.

cin is a predefined variable that reads data from the keyboard with the extraction operator > >.

cout is pronounced "see-out". Used for output, and uses the insertion operator (< <)
cin is pronounced "see-in". Used for input, and uses the extraction operator (> >)

  
  
PROBLEM:

/*
Write a program which does the following

- Declare an integer variable a
- Try taking a number from the console and assign it to a
- Output a to the console
*/

Sample 1:
Input
76

Output
Your number is: 76
  
  

SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a; 
  cout << "Your number is: " << a;
  return 0;
}




                                              

                                                           2. Mile to Kilometer Convertor
                                                  

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



                                                                      3. Table of Any Number

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

