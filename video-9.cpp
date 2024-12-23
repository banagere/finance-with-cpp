#include <iostream>
#include <cmath>
#include <iomanip>
#include "components/divisor.h"
#include "components/multiply.h"
#include "components/globals.h"

using namespace std;

int main()
{
    double principal = 0.0;
    cout << "Enter principal: ";
    cin >> principal;

    double humanInterest = 0.0;
    cout << "Enter interest: ";
    cin >> humanInterest;
    double interest = divisor(humanInterest, globalsPercent);

    int yearsOfLoan = 0.0;
    cout << "Enter years: ";
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, globalsMonths);
    long monthsOfLoan = multiply(yearsOfLoan, globalsMonths);

    double payment = 0.0;
    payment = principal * (monthInterest / (1 - (pow((double)1 + monthInterest, (double)-monthsOfLoan))));
    cout << "Payment: " << fixed << setprecision(2) << payment << endl;

    double currentInterestPayment = 0.0;
    double currentPrincipalPayment = 0.0;
    double currentBalance = 0.0;

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