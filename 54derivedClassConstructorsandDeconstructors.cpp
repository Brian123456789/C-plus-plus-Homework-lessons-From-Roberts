#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Mother ma; //mother obj created, mother constr runs.
    Daughter dina; //daughter obj created, mother constr runs, then daughter constr runs.
}   //gets to end, daughter obj destroyed, daughter deconstr runs, then mother deconstr runs.
    //mother obj destroyed, then mother deconstr runs.
