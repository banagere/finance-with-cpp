#ifndef components_globals_h
#define components_globals_h

const int globalsMonths = 12;
const int globalsPercent = 100;

struct globalsAmmortiseMonth
{
    int year;
    int yearMonth;
    long loanMonth;
    double payment;
    double pureInterest;
    double paidDownPrincipal;
    double principalBalance;
};

#endif