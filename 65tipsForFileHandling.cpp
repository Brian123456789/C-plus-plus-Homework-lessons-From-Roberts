#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream buckysFile("beefjerky.txt");//creates an object that
    //works with files in one line of code. You add the file
    //name as a parameter. Don't use this format if you don't
    //know the name of the file you are working with.
    if (buckysFile.is_open()){//is_open tells you file is ready
            //to work with, if the object is associated with
            //a file. In this case, buckysFile is assoiciated with
            //beefjerky.txt If you remove beefjerky.txt you
            //will get the message "you messed up"
    cout <<"ok file is open" << endl;
    }else{
    cout << "bucky you messed up" << endl;
    }
    buckysFile << "ooh I love beef!!\n" ;
    buckysFile.close(); //closes and frees up memory
}
