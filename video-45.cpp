// https://www.youtube.com/watch?v=9SubQGhfgJQ&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=45
// clang++ -std=c++17 video-45.cpp -o main

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <locale>
#include <sstream>
using namespace std;

class CommaNumPunct : public numpunct<char>
{
public:
protected:
     virtual char do_thousands_sep() const
     {
          return ',';
     }

     virtual string do_grouping() const
     {
          return "\003";
     }

private:
};

template <class ALPHA>
string FormatWithCommas(ALPHA value)
{
     stringstream ss;
     locale commaLoc(locale(), new CommaNumPunct());
     ss.imbue(commaLoc);
     ss << setprecision(2) << fixed << value;
     return ss.str();
}

int main(int argc, const char *argv[])
{
     int anInt = 31235;
     cout << "anInt: " << FormatWithCommas(anInt) << endl;

     float aFloat = 31235.47987;
     cout << "aFloat: " << FormatWithCommas(aFloat) << endl;
     
     long aLong = 987654321;
     cout << "aLong: " << FormatWithCommas(aLong) << endl;

     double aDouble = 987654321.123456789;
     cout << "aDouble: " << FormatWithCommas(aDouble) << endl;

     return 0;
};
