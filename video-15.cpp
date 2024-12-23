#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    const int sizeFive = 5;

    int aInt1[sizeFive];

    int i = 0;
    aInt1[i++] = 1000;
    aInt1[i++] = 1001;
    aInt1[i++] = 1002;
    aInt1[i++] = 1003;
    aInt1[i++] = 1004;

    for (int iCount = 0; iCount < sizeFive; iCount++)
    {
        cout << "aInt1[" << iCount << "]: " << aInt1[iCount] << endl;
    }

    // cout << endl << "aInt1[5]: " << aInt1[5] << endl;

    return 0;
};