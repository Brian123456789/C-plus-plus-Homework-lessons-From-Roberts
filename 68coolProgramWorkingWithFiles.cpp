#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int getWhatTheyWant();//prototype your function!
//main function
int main(){
    int whatTheyWant;
        whatTheyWant = getWhatTheyWant();
    while (whatTheyWant !=4){ //run until press 4
        whatTheyWant = getWhatTheyWant();
    }
}
//getWhatTheyWant function
int getWhatTheyWant () { //recieves what choice returns
int choice;
cout << " 1 - just plain items " << endl;
cout << " 2 - helpful items " << endl;
cout << " 3 - harmful items " << endl;
cout << " 4 - quit program " << endl;
cin >> choice;
return choice; //returns choice to the function
//int getWhatTheyWant
//stores in variable whatTheyWant
}

