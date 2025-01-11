// https://www.youtube.com/watch?v=-A0PMx4-eYw&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=46
// clang++ -std=c++17 video-46.cpp -o main

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <locale>
#include <sstream>
#include <vector>
using namespace std;

template <class ALPHA>
void printVec(ALPHA *vect)
{
     cout << "Size of vector: " << vect->size() << endl;
     for (int i = 0; i < vect->size(); i++)
     {
          cout << vect->at(i) << endl;
     }
     cout << "-" << endl;

     return;
};

template <class ALPHA, class BETA>
void iteratorVect(ALPHA *vect, BETA it)
{

     for (it = vect->begin(); it != vect->end(); it++)
     {
          cout << *it << endl;
     }
     cout << "-" << endl;

     return;
};

int main(int argc, const char *argv[])
{
     vector<double> dVec;

     dVec.push_back(42.999);
     dVec.push_back(23.05);
     dVec.push_back(666.66);
     dVec.push_back(88.88);
     dVec.push_back(98.72);
     dVec.push_back(1.0);

     printVec(&dVec);

     dVec.pop_back();
     printVec(&dVec);

     vector<double>::iterator anIter;
     iteratorVect(&dVec, anIter);

     sort(dVec.begin(), dVec.end());
     iteratorVect(&dVec, anIter);

     return 0;
};
