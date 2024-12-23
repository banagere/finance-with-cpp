#include <iostream>
#include <cmath>
#include <iomanip>
#include "components/divisor.h"
#include "components/multiply.h"
#include "components/globals.h"

using namespace std;

enum AmortiseProgram
{
    LOAN_PRINCIPAL = 1,
    INTEREST_RATE = 2,
    YEARS_OF_LOAN = 3
};

enum AmortiseEnum
{
    YEAR_OUT = 2,
    MONTH_OUT = 2,
    CUMULATIVE_MONTH_OUT = 5,
    PAYMENT_OUT = 12,
    INTEREST_OUT = 12,
    PRINCIPAL_OUT = 12,
    BALANCE_OUT = 16
};

int main(int argc, char *argv[])
{
    double principal = 0.0;
    double humanInterest = 0.0;
    int yearsOfLoan = 0.0;
    double payment = 0.0;
    double currentInterestPayment = 0.0;
    double currentPrincipalPayment = 0.0;
    double currentBalance = 0.0;

    if (argc == 1)
    {
        cout << "Enter principal: ";
        cin >> principal;

        cout << "Enter interest: ";
        cin >> humanInterest;

        cout << "Enter years: ";
        cin >> yearsOfLoan;
    }
    else
    {
        principal = atof(argv[LOAN_PRINCIPAL]);
        humanInterest = atof(argv[INTEREST_RATE]);
        yearsOfLoan = atoi(argv[YEARS_OF_LOAN]);
    }

    double interest = divisor(humanInterest, globalsPercent);
    double monthInterest = divisor(interest, globalsMonths);
    long monthsOfLoan = multiply(yearsOfLoan, globalsMonths);

    payment = principal * (monthInterest / (1 - (pow((double)1 + monthInterest, (double)-monthsOfLoan))));

    cout << "Principal: " << principal << endl;
    cout << "Interest: " << humanInterest << "%" << endl;
    cout << "Years: " << yearsOfLoan << " year(s)" << endl;
    cout << "Payment: " << fixed << setprecision(2) << payment << endl;

    currentBalance = principal;

    long currentLoanMonth = 1;

    int year = 1;
    int switchYear = 0;
    int yearMonth = 1;

    while (currentLoanMonth <= monthsOfLoan)
    {
        globalsAmmortiseMonth amortiseMonth;

        currentInterestPayment = currentBalance * monthInterest;
        currentPrincipalPayment = payment - currentInterestPayment;
        currentBalance = currentBalance - currentPrincipalPayment;

        amortiseMonth.year = year;
        amortiseMonth.yearMonth = yearMonth;
        amortiseMonth.loanMonth = currentLoanMonth;
        amortiseMonth.payment = payment;
        amortiseMonth.pureInterest = currentInterestPayment;
        amortiseMonth.paidDownPrincipal = currentPrincipalPayment;
        amortiseMonth.principalBalance = currentBalance;

        cout << 
        setw(YEAR_OUT) << amortiseMonth.year << " " <<
        setw(MONTH_OUT) << amortiseMonth.yearMonth << " " <<
        setw(CUMULATIVE_MONTH_OUT) << amortiseMonth.loanMonth << " " <<
        setw(PAYMENT_OUT) << amortiseMonth.payment << " " <<
        setw(INTEREST_OUT) << amortiseMonth.pureInterest << " " <<
        setw(PRINCIPAL_OUT) << amortiseMonth.paidDownPrincipal << " " <<
        setw(BALANCE_OUT) << amortiseMonth.principalBalance << 
        endl;

        // cout << "Current Month: " << amortiseMonth.loanMonth << " Interest: " << amortiseMonth.pureInterest << " Principal: " << amortiseMonth.paidDownPrincipal << " Balance: " << amortiseMonth.principalBalance << endl;
        yearMonth++;
        if (yearMonth > globalsMonths)
        {
            yearMonth = 1;
            year++;
        };

        currentLoanMonth++;
    }

    cout << "Loan Payments Complete." << endl;

    return 0;
}