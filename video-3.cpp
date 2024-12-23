#include <iostream>
using namespace std;

int main()
{
    const int months = 12;
    
    double principal = 0.0;
    cout << "Enter principal: ";
    cin >> principal;

    double interest = 0.0;
    cout << "Enter interest: ";
    cin >> interest;
    double interest = interest / 100;

    int yearsOfLoan = 0.0;
    cout << "Enter years: ";
    cin >> yearsOfLoan;

    double monthInterest = interest / months;
    long monthsOfLoan = yearsOfLoan * months;

    cout << principal << " " << interest << " " <<
        yearsOfLoan << " " << monthInterest << " " <<
        monthsOfLoan << endl;

    return 0;
}