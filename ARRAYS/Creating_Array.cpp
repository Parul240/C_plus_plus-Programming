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
