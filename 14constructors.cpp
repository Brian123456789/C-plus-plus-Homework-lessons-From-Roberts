#include <iostream>
#include <string>
using namespace std;

class BuckysClass{
   public:
       BuckysClass(string z){  // <---A constructor is a function that gets called automatically as soon as you create an object.
           setName(z);          // Setting your alarm clock.... you can automatically check and set the real time before setting alarm.
       }                         // Your constructor has the same name as your class. Whenever C++ comes across a function with the
                                // same name as your class, it automatically knows it is a constructor.

       //Whenever you use the setName function, it will pass those arguments into x below, like saying z = x.
       // BuckysClass(string z) <--- Here you are adding a parameter into your constructor so that you can take a value and
                                // assign it to a variable.
                            // setName(z) <-- Here you are passing your variable in a string to set it equal to name. Your variable is
                            // "Lucky Bucky roberts" as defined here: BuckysClass bo("Lucky Bucky roberts\n");

       void setName(string x){   // <-- setName assigns your string to "name", your private variable.
           name = x;
       }
       string getName(){ // getName is used by <<cout to get your string stored in private variable "name".
           return name;
       }
   private:
       string name;
};


int main()
{
   BuckysClass bo("Lucky Bucky roberts\n"); // <--As soon as we create this object, the constructor we created in the class
   cout << bo.getName();                    // will be called.
                // "Lucky Bucky roberts\n" this is a parameter that is passed to our "setName" function above and is stored in
                // the private name variable using our public function setName.

   BuckysClass bo2("Sally mcSalad\n"); // Whenever you create an object from a class, each object has it's own set of variables,
                                       // so they don't overwrite each other.

   cout << bo2.getName();
   return 0;
}
