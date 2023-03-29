                                                                OUTPUTTING CHARACTERS FROM A STRING




We can access the characters in a string by referring to its index number inside square brackets [].
We use the concept of indexing which means every character in a string corresponds to a number called the index number

               0 1 2 3 4 5 6 7  - index number
     for eg - "C o d e B l o c k"
      
Note:
- Indexing always starts from 0 when going left to right.
- So the first character of a string s is s[0], the second is s[1], and so on.
 
 
TASK:
/*
Write a program which does the following
Create a string variable word and assign the text "Programming" to it
Print the characters o and r from the string word in separate lines using the syntax defined above
*/

SOLUTION:

#include <bits/stdc++.h>
using namespace std;

int main() {
  string word = "Programming";
  cout << word[ 2 ] <<endl;
  cout << word[ 4 ];
  return 0;
}

OUTPUT:
o
r
