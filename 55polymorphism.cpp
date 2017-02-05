#include <iostream>
using namespace std;
class Enemy{
    protected:
        int attackPower;
    public: //remember not to capitalize public
        void setAttackPower(int a){     //When passing in a value, get
                                //rid of ; and add{} for rest of code
            attackPower=a;
        }
};
class Ninja: public Enemy{  //inherit functions etc from class Enemy
    public:
        void attack() // ninja has its own attack function.
        {cout << "I am a ninja, ninja chop! -" << attackPower << endl; }
};//don't forget to terminate here
class Monster: public Enemy{  //inherit functions etc from class Enemy
    public:
        void attack() // Monster has its own attack function.
        {cout << "monster must eat you!!!! -" << attackPower << endl; }
};
int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; //make an enemy object pointer and set its address
    //equal to the ninja object. Anything an enemy can do, a ninja can do.
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);//since you are working with a pointer object,
    //you must ad ->. Every enemy has an attack power and this is set to Ninja.
    enemy2->setAttackPower(99);
    n.attack(); //calling Ninja attack. Attack ability is inherited by both.
    m.attack(); //calling monster attack. Each has its own attack level.
}
