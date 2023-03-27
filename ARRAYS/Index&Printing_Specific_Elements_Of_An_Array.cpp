                                                      INDEX & PRINTING SPECIFIC ELEMENTS OF AN ARRAY




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
