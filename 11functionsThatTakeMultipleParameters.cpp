#include <iostream>

using namespace std;

// This function takes two parameters.
int addNumbers(int x, int y){//store two values
    int answer = x + y; //take those two values and add them, store the result in variable "answer"
    return answer;//this returns the variable answer, unlike the often used return 0;
}

int main()
{
    cout << addNumbers(43, 86); // Call the function.

    return 0;
}
