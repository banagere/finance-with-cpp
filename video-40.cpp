// https://www.youtube.com/watch?v=OJGmCmVK08A&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=40
// clang++ -std=c++17 video-40.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
// #include "components/BSM.h"
using namespace std;

class Trader
{
public:
     Trader(double);

     void tripleBonus();

     double getBonus();

private:
     double bonus;
};

Trader::Trader(double initialBonus)
{
     bonus = initialBonus;
}

void Trader::tripleBonus()
{
     bonus *= 3;
}

double Trader::getBonus()
{
     return bonus;
}

void valueBoostBonus(Trader valueTrad)
{
     valueTrad.tripleBonus();
}

void refBoostBonus(Trader &refTrad)
{
     refTrad.tripleBonus();
}

void pointerBoostBonus(Trader *pointerTrad)
{
     pointerTrad->tripleBonus();
}

int main(int argc, const char *argv[])
{
     Trader trader(1000000.00);

     cout << setiosflags(ios::fixed) << setprecision(2);
     cout << "Initial bonus: " << trader.getBonus() << endl;

     valueBoostBonus(trader);

     cout << "New value, bonus: " << trader.getBonus() << endl;

     refBoostBonus(trader);
     cout << "New ref, bonus: " << trader.getBonus() << endl;

     pointerBoostBonus(&trader);
     cout << "New pointer, bonus: " << trader.getBonus() << endl;

     return 0;
};
