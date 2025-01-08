// https://www.youtube.com/watch?v=2F1EjnihgCM&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=32
// g++ -o main video-32.cpp components/bond.cpp

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
