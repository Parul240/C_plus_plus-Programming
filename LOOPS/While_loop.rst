WHILE LOOP
----------





* Loops can execute a block of code as long as a specified condition is reached.
* They are handy because they save time, reduce errors, and they make code more readable.
                                                                   
                                                                   
* A while loop is a control flow statement in C++ that allows you to repeatedly execute a block of code while a particular condition is true.

  
* The syntax of a while loop in C++ is as follows:

     +--------------------------------------------------------------------------+
     |  Syntax - while (condition) {                                            |
     |               //code to be executed repeatedly while condition is true   |
     |            }                                                             |
     +--------------------------------------------------------------------------+
       
The condition is a boolean expression that is evaluated before each iteration of the loop.
If the condition is true, the code inside the while loop will execute. 
If the condition is false, the while loop will exit and program execution will continue with the statement immediately following the while loop.       
       

  
* How does a While loop execute?
     
  1. Control falls into the while loop.
  2. The flow jumps to Condition
  3. Condition is tested.
     - If the Condition yields true, the flow goes into the Body.
     - If the Condition yields false, the flow goes outside the loop
  4. The statements inside the body of the loop get executed.
  5. Updation takes place.
  6. Control flows back to Step 2.
  7. The while loop has ended and the flow has gone outside.
    
    
.. code:: cpp   

    PROGRAM 1:

    /*
    Here's an example of a while loop that counts from 1 to 10:  
    */


    SOLUTION:

    int i = 1;
    while (i <= 10) {
        std::cout << i << " ";
        i++;
    }



    Output is:
    1 2 3 4 5 6 7 8 9 10
    
    
In this example, the condition is i <= 10. As long as i is less than or equal to 10, the loop will execute. Inside the loop, we print the value of i and increment it by 1 using the i++ statement.
  
  
.. code:: cpp

    PROGRAM 2:

    /*       
    Write a program which does the following

    * Declare a variable a and initialise it to 0
    * Use the syntax above to create a loop, output the following to the console
         - Print a in separate lines as long as it is less than 7.
         - Increment a by 1 in each iteration.
    */  

    SOLUTION:

    #include <iostream>
    using namespace std;

    int main() {
      int a = 0;
      while (a < 7 ) {
        cout << a << endl;
        a++;
      }
      return 0;
    }

    Output is:
    0
    1
    2
    3
    4
    5
    6
  

Note: Do not forget to increase the variable used in the condition, otherwise the loop will never end!
       
