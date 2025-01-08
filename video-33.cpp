// https://www.youtube.com/watch?v=cBuKg3EDfVw&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=33
// g++ -o main video-33.cpp components/bond.cpp components/DurationBond.cpp

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/DurationBond.h"
using namespace std;

int main(int argc, const char *argv[])
{
     DurationBond db(1000, 0.075, 0.065, 10, 'S');

     double dbPrice = db.getBondPrice();

     cout << "dbPrice: " << dbPrice << endl;

     return 0;
};
