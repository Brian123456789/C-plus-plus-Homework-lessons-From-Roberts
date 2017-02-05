#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream theFile("players.txt");
    cout << "Enters players ID, Name, and Money" << endl;
    cout << "press Ctrl+Z to quit\n" << endl;
    int idNumber;    string name;    double money;
    //add while loop because we don't know how many characters the user
    //is going to enter, when they are done, they hit cntrl+z and the
    //while loop is no longer true.
    while (cin >> idNumber >>name >>money) {
        theFile << idNumber <<' '<< name << ' ' << money <<endl;
        //insert info into players.txt (because this is the
        //file associated with object "theFile".
    }
}
