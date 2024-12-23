// https://www.youtube.com/watch?v=wLYWMwsQgcY&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=28

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

void Bond::setPrincipal(double prin)
{
     principal = prin;
};
double Bond::getPrincipal()
{
     return principal;
};

void Bond::setRate(double rat)
{
     rate = rat;
};
double Bond::getRate()
{
     return rate;
};

void Bond::setMaturity(double YTM)
{
     yearsToMaturity = YTM;
};
double Bond::getMaturity()
{
     return yearsToMaturity;
};

void Bond::setPaymentType(char type)
{
     paymentType = type;
};
char Bond::getPaymentType()
{
     return paymentType;
};

int main(int argc, const char *argv[])
{
     Bond basicBond;

     cout << "basicBond.getPrincipal: " << basicBond.getPrincipal() << endl;

     return 0;
};