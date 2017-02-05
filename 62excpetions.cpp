#include <iostream>
using namespace std;

int main(){
    try{
        int momsAge = 30;
        int sonsAge = 34;

        if (sonsAge > momsAge){
            throw 99;//throw block throws error if son is older
        }
    }catch(int x){ //catch block catches the error and you store it in a variable,
        //then print it out.
        cout << "son can't be older ERROR number: " << x <<endl;
    }

}
