#include <iostream>
using namespace std;

int main()
{
    int bacon = 1; // start point

    while(bacon <= 5){ // test to end the loop
        cout << "bacon is " << bacon << endl; //bacon will be 1,2,3,4,5.
        bacon = bacon + 1; // number to increment by
                           // HINT - there is a shorthand version: 'bacon = bacon + 1' is the same as 'bacon++';
    }

    return 0;
}
