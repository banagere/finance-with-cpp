#ifndef components_BSM_h
#define components_BSM_h

class BSM
{
public:
    BSM(float, float, float, float, float, long, long);
    ~BSM();

    float getBSMAsset();
    float getBSMStrike();
    float getBSMGrowth();
    float getBSMVolatility();
    float getBSMYears();
    long getBSMSteps();
    long getBSMSimulations();

    void logNormalRandomWalk();
    double getCallPrice();
    double getPutPrice();

    double rn();

private:
    float bsmAsset;
    float bsmStrike;
    float bsmGrowth;
    float bsmVolatility;
    float bsmYears;
    long bsmSteps;
    long bsmSimulations;

    double bsmCallPrice;
    double bsmPutPrice;
};

#endif