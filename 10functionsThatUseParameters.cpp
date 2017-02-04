#include <iostream>

using namespace std;

// This function takes a parameter.
void printCrap(int x){
    cout << "buckys favorite numbner is " << x << endl;
}

int main()
{
    printCrap(854); // Call the function. Whatever number you pass in here becomes x
    // In this case, x = 854. X is a location to store your number so the function can use it.

    return 0;
}
