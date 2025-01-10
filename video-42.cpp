// https://www.youtube.com/watch?v=kt7vBYk9DRQ&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=42
// clang++ -std=c++17 video-42.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
// #include "components/BSM.h"
using namespace std;

template <class ALPHA, class BETA>
ALPHA addNums(ALPHA inputOne, BETA inputTwo)
{
     return (inputOne + inputTwo);
};

int main(int argc, const char *argv[])
{
     float nOne = 23.16;
     double nTwo = 17.34;
     float nAns = 0;

     nAns = addNums(nOne, nTwo);

     cout << nOne << " + " << nTwo << " = " << nAns << endl;

     return 0;
};
