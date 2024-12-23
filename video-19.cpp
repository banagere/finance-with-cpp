#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
    int anInt = 42; // 0
    float aFloat = 3.14f; // 0.0
    double aDouble = 2.71828; // 0.0

    cout << endl <<
    "Memory lego bricks, int: " << sizeof(anInt) << endl <<
    "Memory lego bricks, float: " << sizeof(aFloat) << endl <<
    "Memory lego bricks, double: " << sizeof(aDouble) << endl;

    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    cout << endl <<
    "&anInt: " << &anInt << endl <<
    "&aFloat: " << &aFloat << endl <<
    "&aDouble: " << &aDouble << endl;

    return 0;
};