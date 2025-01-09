// https://www.youtube.com/watch?v=NBrsb4ugxEY&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=36
// clang++ -std=c++17 video-36.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
#include "components/BSM.h"
using namespace std;

enum BSMExecution
{
     ASSET = 1,
     STRIKE = 2,
     GROWTH = 3,
     VOLATILITY = 4,
     YEARS = 5,
     STEPS = 6,
     SIMULATIONS = 7,
};

int main(int argc, const char *argv[])
{
     BSM bsm(atof(argv[ASSET]),
             atof(argv[STRIKE]),
             atof(argv[GROWTH]),
             atof(argv[VOLATILITY]),
             atof(argv[YEARS]),
             atol(argv[STEPS]),
             atol(argv[SIMULATIONS]));

     cout << "Asset: " << bsm.getBSMAsset() << endl
          << "Strike: " << bsm.getBSMStrike() << endl
          << "Growth: " << bsm.getBSMGrowth() << endl
          << "Volatility: " << bsm.getBSMVolatility() << endl
          << "Years: " << bsm.getBSMYears() << endl
          << "Steps: " << bsm.getBSMSteps() << endl
          << "Simulations: " << bsm.getBSMSimulations() << endl;

     bsm.logNormalRandomWalk();

     cout << endl;

     cout << "Call Option Price: " << bsm.getCallPrice() << endl;
     cout << "Put Option Price: " << bsm.getPutPrice() << endl;

     return 0;
};
