#include <iostream>
using namespace std;

int main()
{
    //(initialize value, ending value or condition, how much to increment by)
    //when using a for loop you specify all on the same line.

    //A for loop is written all on one line, unlike the while loop. The while loop is concerned with
    //condition only, a for loop is concerned about 1)initialization (starting value),
    // 2)loop continuation condition (end value) and 3)increment/decrement.

    //A while loop by contrast cares only about condition only.


    for (int x = 1; x < 10; x++){ // initialization; loop continuation condition; increment
        cout << x << endl;
    }

    for (int y = 5; y < 50; y+=5){
        cout << y << endl;
    }

}
