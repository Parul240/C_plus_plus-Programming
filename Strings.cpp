                                               1. STRINGS
                                               

Strings are used for storing text.
A string variable contains a collection of characters surrounded by double quotes.
Before declaring a variable as string the string datatype must be used

 for eg - string name = "Chef";


TASK:

/*
Write a program which does the following

1. Create a string named fruit and assign the value "Apple" to it.
2. Output fruit to the console.
*/
 
SOLUTION:

#include <bits/stdc++.h>
using namespace std;

int main() {
  string fruit = "Apple";
  cout << fruit ;
  return 0;
}



                                                 2. STRING LENGTH



We can use the length() function to get the length of a string.
For eg.

string s = "hello";
int a = s.length(); // a now stores the length of s.


TASK:

/*
Write a program which does the following

- Create a variable txt and assign it the text "NumeroTres"
- Use the length() function to output to the console the number of characters in txt
*/


SOLUTION:

#include <bits/stdc++.h>
using namespace std;

int main() {
  string txt = "NumeroTres";
  cout << "The length of the word is: " << txt.length();
  return 0;
}



                                 3. Outputting Characters from a String


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

