#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int sum;

    cout << "Enter a number hoss! \n";//cout takes info from the computer and gives it to the user.
    cin >> a; // cin takes info from the user and puts it in the computer.

    cout << "Enter another number \n"; // << is the stream insertion operator.
    cin >> b;// cin is an input stream object >> is the stream extraction operator.

    sum = a+b;
    cout << "the sum of those numbers is " << sum << endl;

    return 0;
}
