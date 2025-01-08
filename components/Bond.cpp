#include <iostream>
#include <cmath>
#include "bond.h"
using namespace std;

const char Bond::BOND_ANNUAL_TYPE = 'A';
const char Bond::BOND_SEMIANNUAL_TYPE = 'S';
const char Bond::BOND_QUARTERLY_TYPE = 'Q';

const int BOND_INVALID_BOND_TYPE = 99;

Bond::Bond(double prin, double coup, double mkt, double YTM, char type)
{
    if ((type != BOND_ANNUAL_TYPE) &&
        (type != BOND_SEMIANNUAL_TYPE) &&
        (type != BOND_QUARTERLY_TYPE))
    {
        throw BOND_INVALID_BOND_TYPE;
    }

    cout << "In the bond constructor" << endl;

    setPrincipal(prin);
    setCouponRate(coup);
    setMarketRate(mkt);
    setMaturity(YTM);
    setPaymentType(type);
}

Bond::~Bond()
{
    cout << "In the ~bond deconstructor" << endl;
}

double Bond::getBondPrice()
{
    int scalingFactor = 0;
    if (getPaymentType() == BOND_SEMIANNUAL_TYPE)
    {
        scalingFactor = 2;
    }
    else if (getPaymentType() == BOND_QUARTERLY_TYPE)
    {
        scalingFactor = 4;
    }
    else if (getPaymentType() == BOND_ANNUAL_TYPE)
    {
        scalingFactor = 1;
    }

    double coupon = getPrincipal() * (getCouponRate() / scalingFactor);
    double periods = getMaturity() * scalingFactor;
    double yield = getMarketRate() / scalingFactor;

    double pvCoupons = (coupon * (1 - pow((1 + yield), -periods))) / yield;
    double pvPrincipal = getPrincipal() * pow((1 + yield), -periods);

    double bondPrice = pvCoupons + pvPrincipal;

    return bondPrice;
}

void Bond::setPrincipal(double prin)
{
    principal = prin;
}

double Bond::getPrincipal()
{
    return principal;
}

void Bond::setCouponRate(double coup)
{
    couponRate = coup;
}

double Bond::getCouponRate()
{
    return couponRate;
}

void Bond::setMarketRate(double mkt)
{
    marketRate = mkt;
}

double Bond::getMarketRate()
{
    return marketRate;
}

void Bond::setMaturity(double YTM)
{
    yearsToMaturity = YTM;
}

double Bond::getMaturity()
{
    return yearsToMaturity;
}

void Bond::setPaymentType(char type)
{
    paymentType = type;
}

char Bond::getPaymentType()
{
    return paymentType;
}
