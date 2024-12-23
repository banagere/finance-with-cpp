#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
     double dubArr[5];
     for (int i = 0; i < 5; i++)
     {
          dubArr[i] = ((i + 1) * 100) + (i + 1);
     }

     for (int i = 0; i < 5; i++)
     {
          cout << "dubArr[" << i << "]: " << dubArr[i] << endl;
     }

     int arraySize = 0;

     cout << "How big would you like your array to be? ";
     cin >> arraySize;

     double *pDubArr = new double[arraySize];
     for (int i = 0; i < arraySize; i++)
     {
          pDubArr[i] = ((i + 1) * 100) + (i + 1);
     }

     for (int i = 0; i < arraySize; i++)
     {
          cout << "pDubArr[" << i << "]: " << pDubArr[i] << endl;
     }

     delete[] pDubArr;

     return 0;
};