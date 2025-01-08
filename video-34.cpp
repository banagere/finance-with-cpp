// https://www.youtube.com/watch?v=NduKDXRlZSw&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=34
// clang++ -std=c++17 video-34.cpp components/DurationBond.cpp components/bond.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/DurationBond.h"
using namespace std;

int main(int argc, const char *argv[])
{
     DurationBond db(1000, 0.07, 0.08, 10, 'S');

     double dbPrice = db.getBondPrice();
     cout << "dbPrice: " << dbPrice << endl;

     double dbDuration = db.getDuration();
     cout << "dbDuration: " << dbDuration << endl;

     return 0;
};
