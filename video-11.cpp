#include <iostream>
#include <cmath>
#include <iomanip>
#include "components/divisor.h"
#include "components/multiply.h"
#include "components/globals.h"

using namespace std;

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
        principal = atof(argv[1]);
        humanInterest = atof(argv[2]);
        yearsOfLoan = atoi(argv[3]);
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

    while (currentLoanMonth <= monthsOfLoan)
    {
        globalsAmmortiseMonth amortiseMonth;

        currentInterestPayment = currentBalance * monthInterest;
        currentPrincipalPayment = payment - currentInterestPayment;
        currentBalance = currentBalance - currentPrincipalPayment;

        amortiseMonth.year = 1;
        amortiseMonth.yearMonth = 1;
        amortiseMonth.loanMonth = currentLoanMonth;
        amortiseMonth.payment = payment;
        amortiseMonth.pureInterest = currentInterestPayment;
        amortiseMonth.paidDownPrincipal = currentPrincipalPayment;
        amortiseMonth.principalBalance = currentBalance;

        cout << "Current Month: " << amortiseMonth.loanMonth << " Interest: " << amortiseMonth.pureInterest << " Principal: " << amortiseMonth.paidDownPrincipal << " Balance: " << amortiseMonth.principalBalance << endl;

        currentLoanMonth++;
    }

    cout << "Loan Payments Complete." << endl;

    return 0;
}