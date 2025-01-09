#include <iostream>
#include <cmath>
#include "BSM.h"
using namespace std;

BSM::BSM(float asset, float strike, float growth, float volatility, float years, long steps, long simulations)
{
    bsmAsset = asset;
    bsmStrike = strike;
    bsmGrowth = growth;
    bsmVolatility = volatility;
    bsmYears = years;
    bsmSteps = steps;
    bsmSimulations = simulations;
}

BSM::~BSM() {};

void BSM::logNormalRandomWalk()
{
    srand((unsigned)time(0));

    double callPayoffPot = 0.0;
    double putPayoffPot = 0.0;

    double timeSteps = getBSMYears() / getBSMSteps();
    double sqrtTimeSteps = sqrt(timeSteps);

    for (long i = 1; i <= getBSMSimulations(); i++)
    {
        double asset = getBSMAsset();
        for (int j = 1; j <= getBSMSteps(); j++)
        {
            asset = asset * (1 + getBSMGrowth() * timeSteps + getBSMVolatility() * sqrtTimeSteps * (rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() - 6));

            // cout << "Step " << j << ", asset: " << asset << endl;
        }
        // cout << "Final asset this run:  " << asset << endl;

        if (asset > getBSMStrike())
        {
            callPayoffPot += (asset - getBSMStrike());
        }
        else if (asset < getBSMStrike())
        {
            putPayoffPot += (getBSMStrike() - asset);
        }

        // cout << "callPayoffPot: " << callPayoffPot << endl;
        // cout << "putPayoffPot: " << putPayoffPot << endl;

        if ((i % 10000) == 0)
        {
            cout << "." << flush;

            if ((i % 100000) == 0)
            {
                long iMess = i / 1000;

                cout << iMess << "k" << flush;
            }
        }
    }

    bsmCallPrice = callPayoffPot / getBSMSimulations();
    bsmPutPrice = putPayoffPot / getBSMSimulations();

    return;
}

double BSM::rn()
{
    return (double)rand() / (double)(RAND_MAX + 1.0);
}

float BSM::getBSMAsset()
{
    return bsmAsset;
}

float BSM::getBSMStrike()
{
    return bsmStrike;
}

float BSM::getBSMGrowth()
{
    return bsmGrowth;
}
float BSM::getBSMVolatility()
{
    return bsmVolatility;
}
float BSM::getBSMYears()
{
    return bsmYears;
}
long BSM::getBSMSteps()
{
    return bsmSteps;
}
long BSM::getBSMSimulations()
{
    return bsmSimulations;
}

double BSM::getCallPrice()
{
    return bsmCallPrice;
}
double BSM::getPutPrice()
{
    return bsmPutPrice;
}