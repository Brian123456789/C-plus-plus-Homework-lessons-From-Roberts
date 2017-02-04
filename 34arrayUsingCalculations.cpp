#include <iostream>
using namespace std;

  int main(){
      int array[5] = {20,54,76,832,546};
        int sum=0; //initialize at 0 to avoid random numbers
        for (int x=0; x<=4; x++){ // 5 elements 0-4
            sum= sum+array[x]; // or sum += array[x]. 0+20,20+54,74+76,150+832,982+546.
            cout<<sum<<endl;}}

