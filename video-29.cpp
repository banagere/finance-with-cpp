// https://www.youtube.com/watch?v=LX7tH1olyLo&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=29

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/bond.h"
using namespace std;

int main(int argc, const char *argv[])
{
     Bond basicBond;
     cout << "Before: basicBond.getPrincipal: " << basicBond.getPrincipal() << endl;

     basicBond.setPrincipal(1000);
     cout << "After: basicBond.getPrincipal: " << basicBond.getPrincipal() << endl;

     Bond complexBond(555, 0.05, 10, 'S');
     cout << "Before: complexBond.getPrincipal: " << complexBond.getPrincipal() << endl;

     complexBond.setPrincipal(999);
     cout << "After: complexBond.getPrincipal: " << complexBond.getPrincipal() << endl;

     cout << "Basic bond price: " << basicBond.getBondPrice() << endl;
     cout << "Complex bond price: " << complexBond.getBondPrice() << endl;

     return 0;
};

// g++ -o main video-29.cpp components/bond.cpp