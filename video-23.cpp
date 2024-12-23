#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void fPointer(int *pInput, int sizeOfArray)
{
     cout << endl
          << "In fPointer" << endl;

     for (int i = 0; i < sizeOfArray; i++)
     {
          cout << "pInput :" << pInput << ", " << "*pInput: " << *pInput << endl;
          pInput++;
     }
     cout << "After For Loop. pInput :" << endl
          << pInput << ", " << "*pInput: " << *pInput << endl;
}

void fFullArray(int inputArray[], int sizeOfArray)
{
     cout << endl
          << "In fFullArray" << endl;

     cout << "inputArray: " << inputArray << endl;

     inputArray[0] += 2;

     for (int i = 0; i < sizeOfArray; i++)
     {
          cout << "inputArray[" << i << "]: " << inputArray[i] << endl;
          cout << "&inputArray[" << i << "]: " << &inputArray[i] << endl;
     }
}

int main(int argc, const char *argv[])
{
     int aInt[] = {101, 202, 303};
     cout << "aInt: " << aInt << endl;

     int *pIntOne = aInt;
     cout << "pIntOne: " << pIntOne << endl;

     int *pIntTwo = &aInt[0];
     cout << "pIntTwo: " << pIntTwo << endl;

     fPointer(aInt, 3);
     fPointer(pIntOne, 3);
     fPointer(pIntTwo, 3);

     fFullArray(aInt, 3);

     cout << "aInt[0]: " << aInt[0] << endl;

     return 0;
};