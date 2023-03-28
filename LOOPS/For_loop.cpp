* The for loop is a control structure in C++ that allows you to execute a block of code repeatedly for a specific number of times or until a certain condition is met. 

* The syntax of a for loop is as follows:
                      
             +--------------------------------------------------------------+
             |     for (initialization; condition; increment/decrement) {   |
             |       // block of code to be executed                        |
             |     }                                                        |
             +--------------------------------------------------------------+
               
     Here,

         * initialization - initializes variables and is executed only once
         * condition - if true, the body of for loop is executed
           if false, the for loop is terminated
         * The increment/decrement - is executed at the end of each iteration and is used to modify the loop variable.
             
             
* Here is an example of a for loop that prints the numbers 0 to 9:  

#include <iostream>

using namespace std;

int main() {
        for (int i = 0; i < 10; i++) {
          std::cout << i << std::endl;
}
    return 0;
}

OUTPUT:
0
1
2
3
4
5
6
7
8
9

  
PROGRAM:
/*
Table of any number
*/

SOLUTION:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number is: ";
    cin >> n;

    for (int i = 1; i <= 10; i = i+1) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    
    return 0;
}


Output is:

Enter The Number is: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
  
  
