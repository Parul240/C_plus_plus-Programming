                                                          1. CREATING ARRAYS


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



                                       2. INDEX & PRINTING SPECIFIC ELEMENTS OF AN ARRAY
 
 
You access an array element by referring to the index number inside square brackets [].

                                         
                                                              0    1     2    - index numbers
     for eg - num[ 3 ] = {1 , 100 , 200};
             cout < num[ 1 ]
             output = 100  
                              
Note - Indexing always starts from 0 starting from left to right.

               
PROBLEM:

/*               
Write a program which does the following

- Output the 3rd element from the given array to the console.
*/
               
               
               
SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  int num[ 5 ] = {1, 2, 3, 4, 5 };
  cout << num[ 2 ];
  return 0;
}
                                       
                                       
                                       
                                       
                                       3. CHANGING THE ELEMENTS OF AN ARRAY
                                       

To change the value of a specific element, we can refer to the index number.
                                         

PROBLEM:

/*
Write a program which does the following

- The 3rd month in the given list is incorrect
- Update the 3rd month in the given array with the correct one - "Mar"
- Once the 3rd array element is updated, output the 3rd array element to the console
*/
                                         

SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string mnts[4] = {"Jan", "Feb", " Dec", "Apr"};
  mnts[ 3 ] = "Mar";
  cout << mnts[3];
  return 0;
}
                                       
                                       
