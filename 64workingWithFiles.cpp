#include <iostream>//Needed to add data to the file
#include <fstream>//header file needed to work with files
using namespace std;
int main()
{
    ofstream buckyFile;//this is how you create a file stream object.
    //You need an object to get access to a file.
    buckyFile.open("tuna.txt");//now we need to associate our object with a file itself.
    //it will tell the object buckyFile which file it is to work with.
    //when c++ tries to open this file and sees that it does not exist, it
    //will automatically create it first. This tuna.txt file is now associated
    //with this buckyFile object. Basically buckyFile is the exact same thing as
    //tuna.txt file now.
    buckyFile << "I love tuna and tuna loves me!\n";
    buckyFile.close();//output text to buckyFile.
}

