#ifndef components_bond_h
#define components_bond_h

class Bond
{
public:
    static const char BOND_ANNUAL_TYPE;
    static const char BOND_SEMIANNUAL_TYPE;
    static const char BOND_QUARTERLY_TYPE;

    Bond(double, double, double, double, char);

    ~Bond();

    double getBondPrice();

    void setPrincipal(double);
    double getPrincipal();

    void setCouponRate(double);
    double getCouponRate();

    void setMarketRate(double);
    double getMarketRate();

    void setMaturity(double);
    double getMaturity();

    void setPaymentType(char);
    char getPaymentType();

private:
    double principal;
    double couponRate;
    double marketRate;
    double rate;
    double yearsToMaturity;
    char paymentType; // "A"nnual, "S"emi-Annual, "Q"uarterly
};

#endif