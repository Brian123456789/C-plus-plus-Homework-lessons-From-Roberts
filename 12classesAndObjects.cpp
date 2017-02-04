#include <iostream>

using namespace std;

// Declare a class and define function inside the class
//Classes are an easy way to group functions. Temperature functions put inside temperature class.
//Voltage functions put in a voltage class, etc.
class BuckysClass{//name classes with a capital letter.
public: // You can use the function outside of the class. Public: is the ACCESS SPECIFIER.
        //It can be public or private. Main can not use if set to private.
        void coolSaying(){
            cout << "preachin to the choir" << endl;
        }

};

int main()
{
    BuckysClass buckysObject; // Create an object from BuckysClass. Class classobject
    buckysObject.coolSaying();//the object uses the class function: classobject.function
                //use the dot separator as above to access a function inside of a class.
                                //an object is how you use stuff inside a class.
    //Use objects because you may have functions with the same name in different classes.
    //The object tells C++ what Class you are working with and to get the specific function
    //from that class, it tells C++ what class to get your function from.
    return 0;
}
