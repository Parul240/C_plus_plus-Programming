                                                       FOR EACH LOOP
                                                       



* There is also a "for-each loop", which is used exclusively to loop through elements in an array.

 +-------------------------------------------------------+                                                       
 |   syntax -   for (type variableName : arrayName) {    |
 |              // code block to be executed             |
 |              }                                        |
 +-------------------------------------------------------+
  
 As we can see:

   * During the loop initialization, the elemental variable declaration is the part where we need to declare the variable which will iterate over the array or vector. 
     Here, the type is the data type of the variableName
   * arrayName is the name of the respective data set over which the loop will iterate,
  
    
PROGRAM:

/*
Write a program which does the following

- Create an integer array num which has the integers - 10, 20, 30, 40, 50, 60, 70, 80
- Output to the console the following
      All the elements of the given array in separate lines
      Use the "for each" loop syntax defined above
*/

SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int num[8] = {10, 20, 30, 40, 50,60,70,80};
  for (int i : num ) {
   cout << i << endl;
  }
  return 0;
} 

OUTPUT:
10
20
30
40
50
60
70
80
