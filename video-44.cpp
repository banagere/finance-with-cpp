// https://www.youtube.com/watch?v=7Q8rY8374kc&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=44
// clang++ -std=c++17 video-44.cpp -o main

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

template <class ALPHA>
class SwapSpread
{
public:
     SwapSpread(ALPHA, ALPHA);

     ALPHA spreadRate();

private:
     ALPHA swapRateIn;

     ALPHA swapRateOut;
};

template <class ALPHA>
SwapSpread<ALPHA>::SwapSpread(ALPHA swapIn, ALPHA swapOut)
{
     swapRateIn = swapIn;
     swapRateOut = swapOut;
}

template <class ALPHA>
ALPHA SwapSpread<ALPHA>::spreadRate()
{
     return abs(swapRateIn - swapRateOut);
}

int main(int argc, const char *argv[])
{
     double firstS = 6.42;
     double secondS = 7.54;
     double spread = 0.0;

     SwapSpread<double> swaps(firstS, secondS);

     spread = swaps.spreadRate();

     cout << "Swap Spread: " << spread << endl;

     return 0;
};
