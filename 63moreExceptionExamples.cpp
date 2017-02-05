#include <iostream>
using namespace std;

int main()
{

    try{
        double num1;
        cout << "Enter first number: " << endl;
        cin >> num1;//input is assigned to variable num1

        double num2;
        cout << "Enter second number: " << endl;
        cin >> num2;//what you put is assigned to variable

        if (num2 == 0)
            {
            throw 0;// Error 0 means num2 was 0.
            }
        cout << num1/num2 << endl;//throw block and catch block skipped if
        //num2 is not 0

        }
        catch(...)

        {//int x is just an error reference number
        //to catch any type of data replace (int x) with (...)
        cout << "you can't divide by 0 " <<endl;
        }
}
