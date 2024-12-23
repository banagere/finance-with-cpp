#include <iostream>
using namespace std;

double divisor(double numerator, double denominator)
{
    // This function divides two numbers and returns the result
    return numerator / denominator;
}

double multiply(double firstNumber, double secondNumber)
{
    // This function multiplies two numbers and returns the result
    return firstNumber * secondNumber;
}

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

    cout << principal << " " << interest << " " << yearsOfLoan << " " << monthInterest << " " << monthsOfLoan << endl;

    return 0;
}