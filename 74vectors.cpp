#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   //std::vector<int>my_vec(10);//vector size of 10
   std::vector<int>my_vec;//vector that you can adjust dynamically
   my_vec.push_back(10);//this is how we adjust size from the end. line 0
   my_vec.push_back(20);//line 1
   cout << "vector size = " << my_vec.size() << endl;
   my_vec.push_back(30);//line 2
   my_vec.push_back(40);//line 3
   cout << "vector size = " << my_vec.size() << endl;
   //console output: vector size = 2
   //console output: vector size = 4
    for (int i = 0; i < my_vec.size(); i++) //to access values
    //cout << "vector  " << i <<" "<< my_vec[i] << endl;//i starts at 0
        cout << "vector  " << i <<" "<< my_vec.at(i) << endl;//gives same result using .at

    //my_vec.erase(my_vec.end());//erases values from the end, not beginning, THIS DOES NOT WORK
    //directly, must be used indirectly.

    //my_vec.erase(my_vec.begin() +3);//erases row 3 (0,1,2,3) USE THIS METHOD //this erases based
    //on index.
        //my_vec.erase(std::remove(my_vec.begin(),my_vec.end(),30),my_vec.end());
        //this erases based on value
        my_vec.clear();//clears all vectors
        cout << endl <<endl;
    //my_vec.erase(my_vec.begin());//erases element values you specify from the start point
    cout << "Is vector empty " << my_vec.empty() << endl;//checks to see if vector is cleared
    for (int i = 0; i < my_vec.size(); i++) //to access values
        //cout << "vector  " << i <<" "<< my_vec.at(i) << endl;//erases values in first line
        //and is replace by 20.

   return 0;
}
