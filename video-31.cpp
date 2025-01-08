// https://www.youtube.com/watch?v=jDv21brY_b8&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=31
// g++ -o main video-31.cpp components/bond.cpp

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/bond.h"
using namespace std;

int main(int argc, const char *argv[])
{
     try
     {
          Bond complexBond(1000, 0.075, 0.065, 10, 'S');

          cout << "Bond price: " << complexBond.getBondPrice() << endl;
     }

     catch (int error)
     {
          cout << "Bond creation failed, ERROR: " << error << endl;
     }

     return 0;
};
