#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int getWhatTheyWant();//prototype
void displayItems(int x);//prototype
int main(){
    int whatTheyWant;
        whatTheyWant = getWhatTheyWant();
    while (whatTheyWant !=4){
            switch (whatTheyWant){//use switch when testing a single
                //variable for multiple values, not if-else statements.
            case 1://if whatTheyWant = 1 show plain items
                displayItems(1);//parameter 1 show plain items
                break;          //displayitems is a function we will build
                case 2://if whatTheyWant = 2 show beneficial items
                displayItems(2);//parameter 2 show beneficial items
                break;
                case 3://if whatTheyWant = 3 show harmful items
                displayItems(3);//parameter 3 show harmful items
                break; }
         whatTheyWant = getWhatTheyWant();  } }
//getWhatTheyWant function
int getWhatTheyWant(){
int choice;
cout << " 1 - just plain items " << endl;
cout << " 2 - helpful items " << endl;
cout << " 3 - harmful items " << endl;
cout << " 4 - quit program " << endl;
cin >> choice;
return choice;}
//display items function
void displayItems(int x){//int x is what you press... 1, 2, or 3.
    ifstream objectFile("objects.txt");//don't forget quotes
    string name;//item name
    double power;//item -damage or +power
        if (x==1){//loop through objects if 0 print
    while(objectFile >> name >> power){
        if(power==0){//if item power=0 print plain items
            cout << name << ' ' << power << endl;}}}
        if (x==2){//loop through objects if >0 print
    while(objectFile >> name >> power){
        if(power>0){//if power greater than 0 print helpful items
            cout << name << ' ' << power << endl;}}}
        if (x==3){//loop through objects if <0 print
    while(objectFile >> name >> power){
        if(power<0){//if power is less than 0 print harmful items
            cout << name << ' ' << power << endl;}}}}

