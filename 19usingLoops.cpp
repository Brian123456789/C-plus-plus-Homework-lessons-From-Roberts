#include <iostream>
using namespace std;

int main()

//step 1. make a loop that runs 5 times.
//Step 2. Add functionality so user can enter a number.
//step 3. Add a feature to sum up all those numbers and print it out to the user.

{
    int x = 1; // loop start point
    int number; // store the number the user enters
    int total = 0; // store the sum of the numbers

    while (x <= 5){ //Note you can make a while loop quit by adding: while (x!= -1)
        cin >> number; // (STEP 2) ask the user for a number and store it in the number variable
        total = total + number; // (STEP 3)add the number to the total. HINT - the shorthand version is: total += number;
        //note: total will now equal previous total plus the number you entered.
        x++; // is the same as: x = x + 1; Do it again until 5 number have been entered.
    }

    cout << "Your total is " << total << endl; //(STEP 3) second part of step 3.

    return 0;
}
