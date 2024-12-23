// https://www.youtube.com/watch?v=jFuAVBP-99I&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=30

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/bond.h"
using namespace std;

int main(int argc, const char *argv[])
{
     Bond complexBond(1000, 0.075, 0.065, 10, 'S');

     cout << "Bond price: " << complexBond.getBondPrice() << endl;

     return 0;
};

// g++ -o main video-30.cpp components/bond.cpp