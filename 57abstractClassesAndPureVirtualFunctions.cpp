#include <iostream>
using namespace std;
class Enemy{
    public:
        virtual void attack()=0; // make a pure virtual function by adding =0;
        //Any class with a pure virtual function in it, is an ABSTRACT Class.

        //{
        //cout << "I am the enemy class" << endl;
        //}; // since we added code, move the closing curly bracket and terminate.
        //Notice when we run this code, "I am the enemy class" does not print out.
        //This is because it is a virtual function, and the program looks at the
        //class of the object calling the function, and finds it in that class,
        // and then uses it.
};
class Ninja: public Enemy{
    public:
        void attack (){
            cout <<"ninja attack!" << endl;
        }
    };
class Monster: public Enemy{
    //Notice if Monster's attack function does not exist, it inherits and uses
    //the enemy attack function.
    //Since the attack function in Enemy class was made a pure virtual function,
    //Monster now MUST have it's own attack function that will overwrite the
    //Enemy class's attack function. If you try to comment out the attack function
    //now, it won't compile and will give an error.
    public:
        void attack (){
            cout <<"monster attack!" << endl;
    }
};
int main(){
    Ninja n; //create ninja object
    Monster m; // create monster object
    Enemy *enemy1 = &n; //enemy1 = address of ninja object
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
}
