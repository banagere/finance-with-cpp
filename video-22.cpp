#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int fDirNumDub(int inputInt)
{
     inputInt *= 2;
     cout << "Address of inputInt: " << &inputInt << endl;

     return inputInt;
}

void fRefNumDub(int &inputInt)
{
     inputInt *= 2;
     cout << "Address of inputInt: " << &inputInt << endl;

     return;
}

void fDirPointInt(int *inputPointer)
{
     *inputPointer *= 2;
}

int main(int argc, const char *argv[])
{
     int dirInt = 10;
     cout << "before dirInt: " << dirInt << endl;
     cout << "Address of dirInt: " << &dirInt << endl;

     dirInt = fDirNumDub(dirInt);

     cout << "after dirInt: " << dirInt << endl;

     ///////////////////
     cout << endl;
     int refInt = 33;
     cout << "before refInt: " << refInt << endl;
     cout << "Address of refInt: " << &refInt << endl;

     fRefNumDub(refInt);

     cout << "after refInt: " << refInt << endl;

     ///////////////////
     cout << endl;
     int dirPointInt = 42;
     cout << "before dirPointInt: " << dirPointInt << endl;

     int *pDirPointInt = &dirPointInt;
     fDirPointInt(pDirPointInt);

     cout << "after  dirPointInt: " << dirPointInt << endl;

     ///////////////////
     cout << endl;
     int inDirPointInt = 69;
     cout << "before inDirPointInt: " << inDirPointInt << endl;

     fDirPointInt(&inDirPointInt);
     cout << "after inDirPointInt: " << inDirPointInt << endl;

     return 0;
};