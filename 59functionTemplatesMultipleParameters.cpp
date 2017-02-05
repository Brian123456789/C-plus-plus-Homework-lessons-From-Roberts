#include <iostream>
using namespace std;

template <class First, class Second> //create two classes to put generic types
First smaller (First a, Second b){ //whatever you put first is the return type.
return (a<b?a:b); // This will return the First data type! NOT the second
}                 // data type.
int main(){
    int x=89;
    double y = 56.78;
    cout << smaller (y,x)<< endl; // Whatever you put first, in this case, Y
                                // will return that data type e.g. double
}
