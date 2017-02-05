#include <iostream>
using namespace std;
template <class T>
class Spunky{
public:
    Spunky (T x){ //this class handles everything besides characters
        cout << x << " is not a character!" <<endl;
    }
};
template <> //use template specialization
class Spunky<char>{ // tell class what type of data to use
public:
    Spunky(char x){ //create constructor
        cout << x << " is a character!" <<endl;
    }
};
int main(){
    Spunky<int> obj1 (7);
    Spunky<double> obj2 (3.154);
    Spunky<char> obj3 ('q');//use single quotes for char
}
