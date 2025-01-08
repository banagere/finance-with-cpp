#include <iostream>
#include <cmath>
#include "DurationBond.h"
using namespace std;

DurationBond::DurationBond(double prin, double coup, double mkt, double YTM, char type) : Bond(prin, coup, mkt, YTM, type)
{
    cout << "In the DurationBond constructor" << endl;

    setDuration(calculateDuration());
}

DurationBond::~DurationBond()
{
    cout << "In the DurationBond deconstructor" << endl;
}

double DurationBond::calculateDuration()
{

    // Get the current YTM of the bond
    double originalMarketRate = getMarketRate();

    cout << "originalMarketRate: " << originalMarketRate << endl;

    // Shock interest rate factor is 'Y', and as it's a
    // difference between rates, we often call it 'Delta'
    double deltaY = DURATION_BOND_RATE_CHANGE;

    if (originalMarketRate <= DURATION_BOND_RATE_CHANGE)
    {
        deltaY = originalMarketRate - 0.0001;
    }
    cout << "deltaY: " << deltaY << endl;

    // v1 is the current bond price
    double v1 = getBondPrice();
    cout << "Current bond price v1: " << v1 << endl;

    // Shock the interest rate down by deltaY
    double bipsLower = originalMarketRate - deltaY;
    cout << "bipsLower: " << bipsLower << endl;
    setMarketRate(bipsLower);

    double v2 = getBondPrice();
    cout << "Higher bond price v2: " << v2 << endl;

    // Shock the interest rate up by deltaY
    double bipsHigher = originalMarketRate + deltaY;
    cout << "bipsHigher: " << bipsHigher << endl;
    setMarketRate(bipsHigher);

    double v3 = getBondPrice();
    cout << "Lower bond price v3: " << v3 << endl;

    // Reset YTM to actual current rate
    setMarketRate(originalMarketRate);

    // Calculate Bond Duration
    double calculateDuration = (v2 - v3) / (2 * v1 * deltaY);
    cout << "Duration: " << calculateDuration << endl;

    return calculateDuration;
}

double DurationBond::getDuration()
{
    return duration;
}

void DurationBond::setDuration(double inputDuration)
{
    duration = inputDuration;
}