#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
//ofstream is for outputting data to a stream, writing to a file.
    ifstream theFile("players.txt"); //optional constructor
    //ifstream - reading data in from a file and storing in
    //computer's memory, for instance.
    int id;    string name;    double money; //3 variables
    while (theFile >> id >> name >> money) {
        //loops through each piece of info and stores it
            //in a variable.
        //take data from file and store in variables in our program.
    cout << id << ", " << name << ", " << money << endl;
    } //when gets to end of file, return null pointer.
}
