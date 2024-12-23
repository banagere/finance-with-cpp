// https://www.youtube.com/watch?v=LKVbfPdZ5kQ&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=27

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/bond.h"
using namespace std;

Bond::Bond()
{
     cout << "I have created a default bond" << endl;

     principal = 100;
     rate = 0.01;
     yearsToMaturity = 1;
     paymentType = 'A';
}

int main(int argc, const char *argv[])
{
     Bond basicBond;

     cout << "basicBond.getPrincipal: " << basicBond.getPrincipal() << endl;

     return 0;
};