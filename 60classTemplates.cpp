#include <iostream>
using namespace std;
template <class T> //Create generic data type template named "T"
class Bucky{
    T  first, second;  //make two variables, we don't know what type they will
                    // be so just name first type T, generic data type.
     public:
        Bucky (T a, T b) { //create constructor
            first=a;
            second=b;}
        T bigger(); //add another function to determine which variable is bigger
        //this "bigger" function we will create outside of the class.
};//don't forget to terminate here if not done automatically.
template <class T>//Function member outside class. Must write this line again.
T Bucky<T>::bigger(){//Return type (generic T) Class, and function name. Right
//after class name, you must add angle brackets and add data type T. This tells
//C++ that you are going to be using the same template parameter that you are
//using for your class.
//This function is going to take the parameters first and second and say which
//is bigger.
return (first>second?first:second);//if first is bigger return first, else, second.
}
int main () {
Bucky <int> bo(69,105);// here you MUST specify data type
cout << bo.bigger();
}
