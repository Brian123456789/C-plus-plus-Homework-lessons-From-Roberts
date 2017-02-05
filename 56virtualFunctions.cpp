#include <iostream>
using namespace std;
class Enemy{
    public:
        virtual void attack(){}  //making this function so every enemy has
        //the ability to attack. Each enemy will overwrite this function
        //so we make it a virtual function, implying we will use it polymorphicly.
};
class Ninja: public Enemy{
    public:
        void attack (){
            cout <<"ninja attack!" << endl;
    }
    };
class Monster: public Enemy{
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
