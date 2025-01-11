// https://www.youtube.com/watch?v=mkFj8o_OcUI&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=43
// clang++ -std=c++17 video-43.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

template <class BUBBLE>
void bubbleSort(BUBBLE *vector, int num)
{
     for (int i = 1; i < num; i++)
     {
          for (int j = 0; j < num - i; j++)
          {
               if (vector[j] > vector[j + 1])
               {
                    swap(vector[j], vector[j + 1]);
               }
          }
     }
}

template <class PRINTOUT>
void printOutVect(PRINTOUT *vector, int num)
{
     for (int i = 0; i < num; i++)
     {
          cout << vector[i] << " ";
     }

     cout << endl;
}

int main(int argc, const char *argv[])
{
     int arrInts[5] = {23, 666, 5, 72, 69};

     printOutVect(arrInts, 5);

     bubbleSort(arrInts, 5);

     printOutVect(arrInts, 5);

     return 0;
};
