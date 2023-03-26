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
                                       
                                       
                                                   4. DISPLAYING ELEMENTS
                                                   


PROBLEM:
/*
Write a program which does the following

- Create a string array for the following values "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", and "Sunday"
- Output the last two elements of the array on separate lines
*/


SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string week[4] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  cout << week[ 5 ] << endl;
  cout << week[ 6 ];
  return 0;
}



                                                           5. DISPLAYING THE COUNT OF ELEMENTS 
                                                           

To get the size of an array, you can use the sizeof() operator:
For e.g.

          int myNumbers[5] = {10, 20, 30, 40, 50};
          cout < sizeof(myNumbers);
          Result = 20
            
Note->
* The result show 20 instead of 5, when the array contains 5 elements.
* It is because the sizeof() operator returns the size of a type in bytes
* int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes. 
            

PROBLEM:

/*
Write a program which does the following

- Create an int array containing the elements - 10, 20, 30, 40, 50, 60
- Compile and output to the console the accurate count of the number of integer elements in the given array.
*/


SOLUTION:


