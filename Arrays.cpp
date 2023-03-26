                                                          1. CREATING ARRAYS


In C++, you can create arrays using the square bracket notation ([]) to specify the size of the array. Here's an example of how to create an array of integers in C++:
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array,

- Define the variable type,
- Specify the name of the array followed by square brackets and
- Specify the number of elements it should store.
       For eg : string Cars[4] = {"Ferrari","Volvo","Lambo","Tesla"}

For eg
#include <iostream>
using namespace std;

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    return 0;
}

Output:
1 2 3 4 5

In this example, the my_array variable is an array of integers with a size of 5. The array is initialized with the values 1, 2, 3, 4, and 5 using curly braces {}.

  
* You can also create arrays without initializing them with any values, like this:

+-------------------+
| int my_array[10]; |
+-------------------+

    In this example, my_array is an array of integers with a size of 10. The values in the array are undefined and will contain garbage values until they are initialized.


  
* C++ also supports multidimensional arrays, which are arrays of arrays. Here is an example of how to create a two-dimensional array of integers with a size of 3x3:
  
  int my_array[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

    In this example, the my_array variable is a two-dimensional array of integers with a size of 3x3. The array is initialized with the values 1-9 using curly braces {}.

  
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

Output: Done

                                       2. INDEX & PRINTING SPECIFIC ELEMENTS OF AN ARRAY
 
 
* To access the elements of an array in C++, you can use the square bracket notation ([]). 
* The square brackets contain the index of the element you want to access.
* Here is an example of how to access the elements of an array in C++: 

#include <iostream>

using namespace std;

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    cout << my_array[0] << endl; // Output: 1
    cout << my_array[1] << endl; // Output: 2
    cout << my_array[2] << endl; // Output: 3

    // Changing an element of the array
    my_array[3] = 10;
    cout << my_array[3] << endl; // Output: 10

    return 0;
}

   Output:
    2
    3
    10

  In this example, the my_array variable is an array of integers with a size of 5. The elements of the array are accessed using square brackets ([]). You can also modify an element of the array by assigning a new value to it using the square bracket notation.

* To print all the elements of an array, you can use a loop. Here is an example of how to print all the elements of an array in C++:


#include <iostream>

using namespace std;

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};

    // Printing all the elements of the array
    for (int i = 0; i < 5; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}

  Output: 
  1 2 3 4 5 
   
      
    In this example, a for loop is used to iterate over the elements of the array and print them to the console. The loop runs from 0 to 4 (inclusive) because the array has a size of 5.



                                         
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

Output: 
3
                                       
                                       
                                       
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

#include <iostream>
using namespace std;

int main() {
  int Num[6] = {10, 20, 30, 40, 50,60};
  cout << sizeof(Num) / 4;
  return 0;
}

OUTPUT: 6
