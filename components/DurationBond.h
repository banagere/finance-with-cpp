#ifndef components_DurationBond_h
#define components_DurationBond_h

#include <iostream>
#include "bond.h"
using namespace std;

class DurationBond : public Bond
{
public:
    const double DURATION_BOND_RATE_CHANGE = 0.005;

    DurationBond(double, double, double, double, char);
    ~DurationBond();

    double calculateDuration();

    void setDuration(double);

    double getDuration();

private:
    double duration;
};

#endif