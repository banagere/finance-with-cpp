#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

struct nameAndSalary
{
     string name;
     double salary;
};

void printOut(nameAndSalary *pIn, int sizeOfArrary)
{
     for (int i = 0; i < sizeOfArrary; i++)
     {
          cout << (*(pIn + i)).name << ", " << (*(pIn + i)).salary << endl;
     }
     return;
}

void sortFab4(nameAndSalary *pNAS, int sizeOfArrary)
{
     bool swapAgain = true;

     while (swapAgain)
     {
          swapAgain = false;

          for (int i = 0; i < (sizeOfArrary - 1); i++)
          {
               if ((*(pNAS + i)).salary < (*(pNAS + i + 1)).salary)
               {
                    swapAgain = true;

                    nameAndSalary temp = *(pNAS + i);

                    *(pNAS + i) = *(pNAS + i + 1);
                    *(pNAS + i + 1) = temp;

                    cout << endl
                         << "Swapped to..." << endl;
                    printOut(pNAS, sizeOfArrary);
               }
          }
     }
     return;
}

int main(int argc, const char *argv[])
{
     nameAndSalary fAB[4] =
         {
             {"John", 79000},
             {"Paul", 129000},
             {"George", 89000},
             {"Ringo", 99000}};

     cout << endl
          << "Before processing..." << endl;
     printOut(fAB, 4);

     // Sorting
     sortFab4(fAB, 4);
     cout << endl
          << "After processing..." << endl;
     printOut(fAB, 4);

     return 0;
};