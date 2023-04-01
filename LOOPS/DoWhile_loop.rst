DO WHILE LOOP
-------------




* In C++, a do-while loop is a control flow statement that executes a block of code at least once, and then repeats the execution of the block of code as long as the specified condition is true. 

* The basic syntax of a do-while loop is as follows:

                                  +------------------------------------+
                                  |      do {                          |
                                  |         // code to be executed     |
                                  |     } while(condition);            |
                                  |                                    |
                                  +----------------------------------- + 

                                    
* The do-while loop consists of the following parts:

    - The keyword do which indicates the start of the loop.
    - The block of code to be executed, enclosed in curly braces { }.
    - The keyword while which indicates the end of the loop.
    - The condition to be checked for each iteration of the loop, which is specified inside the parentheses ( ) following the keyword while.                                    


      
* How does a do-While loop execute?
  
    1. Control falls into the do-while loop.
    2. The statements inside the body of the loop get executed.
    3. Updation takes place.
    4. The flow jumps to Condition
    5. Condition is tested. 
        - If the Condition yields true, go to Step 6.
        - If the Condition yields false, the flow goes outside the loop
    6. The flow goes back to Step 2.
    7. The do-while loop has been ended and flow has gone outside the loop.  
     
     
.. code:: cpp     
PROGRAM:

/*
print the value of a
*/


SOLUTION:

#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 10;

   // do loop execution
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while( a < 20 );
 
   return 0;
}
  

OUTPUT:
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
value of a: 16
value of a: 17
value of a: 18
value of a: 19
       
     
