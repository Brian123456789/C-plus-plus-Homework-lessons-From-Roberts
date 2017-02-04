#include <iostream>
#include <string>
using namespace std;

class BuckysClass{
    public:
        void setName(string x){//public function to change or assign the name
            name = x;
        }
        string getName(){// public function to get name we assigned
            return name;
        }
    private:
        string name;//private name variable, not accessible inside of main
};


int main()
{
    BuckysClass bo;//creating an object and using that object to call functions from our class
    bo.setName("Sir Bucky Wallace");
    cout << bo.getName();// bo is the object . <-- dot separator getName is the function
    return 0;
}
