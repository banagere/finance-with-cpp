// https://www.youtube.com/watch?v=NTsAwMzlKn8&list=PLLLuxp_C798FgdhHllQ8pvzUv-_D1PhF0&index=41
// clang++ -std=c++17 video-41.cpp -o main

#include <iostream>
#include <iomanip>
#include <cstdio>
// #include "components/BSM.h"
using namespace std;

class SportsCar
{
public:
     SportsCar(string);
     ~SportsCar();

     static int getCarCount();

private:
     string colour;

     static int carCount;
};

int SportsCar::carCount = 0;

SportsCar::SportsCar(string orderColour)
{
     colour = orderColour;
     cout << "New " << this->colour << " Car constructrd" << endl;

     carCount++;
};

SportsCar::~SportsCar()
{
     cout << "Old " << this->colour << " Car crushed!" << endl;

     carCount--;
};

int SportsCar::getCarCount()
{
     return carCount;
}

void outputCount()
{
     cout << "Count of cars is " << SportsCar::getCarCount() << endl;
}

int main(int argc, const char *argv[])
{
     outputCount();

     SportsCar *pSilverCar = new SportsCar("Silver");
     outputCount();

     SportsCar *pBlackCar = new SportsCar("Black");
     outputCount();

     delete pSilverCar;
     outputCount();

     delete pBlackCar;
     outputCount();

     return 0;
};
