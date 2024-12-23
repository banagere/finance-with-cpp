#include <iostream>
#include <cmath>
#include <iomanip>
#include "components/divisor.h"
#include "components/multiply.h"

using namespace std;

int main()
{
    const int months = 12;
    const int percent = 100;

    double principal = 0.0;
    cout << "Enter principal: ";
    cin >> principal;

    double humanInterest = 0.0;
    cout << "Enter interest: ";
    cin >> humanInterest;
    double interest = divisor(humanInterest, percent);

    int yearsOfLoan = 0.0;
    cout << "Enter years: ";
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, months);
    long monthsOfLoan = multiply(yearsOfLoan, months);

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

        currentInterestPayment = currentBalance * monthInterest;
        currentPrincipalPayment = payment - currentInterestPayment;
        currentBalance = currentBalance - currentPrincipalPayment;

        cout << "Current Month: " << currentLoanMonth << " Interest: " << currentInterestPayment << " Principal: " << currentPrincipalPayment << " Balance: " << currentBalance << endl;

        currentLoanMonth++;
    }

    cout << "Loan Payments Complete." << endl;

    return 0;
}