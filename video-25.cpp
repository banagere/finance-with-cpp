#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
     char aChar = 'x';
     cout << "aChar: " << aChar << endl;

     char aName[] = "Malvolio";
     cout << "aName: " << aName << endl;

     const char *cNames[] = {"Pinky", "Perky", "Porky"};
     for (int i = 0; i < 3; i++)
     {

          cout << "cNames[" << i << "]: " << cNames[i] << endl;
     }

     string aString = "Orsino";
     cout << "aString: " << aString << endl;

     string cppNames[] = {"Scotty", "Kirky", "Spocky"};
     for (int i = 0; i < 3; i++)
     {

          cout << "cppNames[" << i << "]: " << cppNames[i] << endl;
     }
     cout << "cppNames: " << cppNames << endl;


     return 0;
};