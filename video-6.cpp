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

    return 0;
}