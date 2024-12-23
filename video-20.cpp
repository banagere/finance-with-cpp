#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
    int anInt = 0;        // 42 also makes it zero -- chatGPT said it
    float aFloat = 0.0;   // 3.14f
    double aDouble = 0.0; // 2.71828

    cout << endl
         << "Memory lego bricks, int: " << sizeof(anInt) << endl
         << "Memory lego bricks, float: " << sizeof(aFloat) << endl
         << "Memory lego bricks, double: " << sizeof(aDouble) << endl;

    cout << endl
         << "anInt: " << anInt << endl
         << "aFloat: " << aFloat << endl
         << "aDouble: " << aDouble << endl;

    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    cout << endl
         << "&anInt: " << &anInt << endl
         << "&aFloat: " << &aFloat << endl
         << "&aDouble: " << &aDouble << endl;

    // 4444444444444444|5555555555555555|6666666666666666
    // 0123456789abcdef|0123456789abcdef|0123456789abcdef

    int *pInt = &anInt;
    float *pFloat = &aFloat;
    double *pDouble = &aDouble;

    cout << endl
         << "pInt: " << pInt << endl
         << "pFloat: " << pFloat << endl
         << "pDouble: " << pDouble << endl;

    cout << endl
         << "Sizeof, pInt: " << sizeof(pInt) << endl
         << "Sizeof, pFloat: " << sizeof(pFloat) << endl
         << "Sizeof, pDouble: " << sizeof(pDouble) << endl;
    
    cout << endl
         << "&pInt: " << &pInt << endl
         << "&pFloat: " << &pFloat << endl
         << "&pDouble: " << &pDouble << endl;

    return 0;
};