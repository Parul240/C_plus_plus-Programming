Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array,

- Define the variable type,
- Specify the name of the array followed by square brackets and
- Specify the number of elements it should store.

For eg
string Cars[4] = {"Ferrari","Volvo","Lambo","Tesla"}


TASK:

/*
Write a program which does the following

- Create an Array of the first 5 positive integers
- Once the array is define - output "Done" to the console.
*/


SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  int num[ 5 ] = {1, 2, 3, 4 ,5 };
  cout << "Done";
  return 0;
}
