                                                    CONTINUE STATEMENT
                                                    



* Recall that 'break' exit the loop entirely when its condition was met - ignoring all subsequent iterations.
* The 'continue' statement skips one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

* The syntax of the continue statement is:

                   +-------------+
                   |  continue   |
                   +-------------+
                     
                     
// program to print the value of i

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}


OUTPUT:
1
2
4
5
