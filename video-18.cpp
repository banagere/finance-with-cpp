#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void printOutName(char inputString[])
{
    for (int i = 0; inputString[i] != '\0'; i++) // Use '\0' instead of "\0"
    {
        cout << inputString[i];
    }
    cout << endl;
}

int main(int argc, const char *argv[])
{

    // Chars and Strings

    char aCharacter = 'x';
    cout << endl
         << aCharacter << endl;

    char firstName[] = {'R',
                        'o',
                        'c',
                        'k',
                        'y',
                        '\0'};
    char secondName[] = "Bhai";
    string thirdName = "Kanroooo!!!";

    printOutName(firstName);
    printOutName(secondName);
    cout << thirdName << endl;

    // Adding commas to long number
    cout << endl;

    double inputDub = 87833433.309922;

    cout << "inputDub: " << setprecision(30) << inputDub << endl;

    char startStr[64];
    snprintf(startStr, sizeof(startStr), "%.2f", inputDub);
    cout << "startStr: " << startStr << endl;

    char finalStr[128];

    long startStrLen = strlen(startStr);
    cout << "startStrLen: " << startStrLen << endl;

    long distToDot = startStrLen - 3;
    long decreaseDist;

    int finalCount = 0;

    for (int startCount = 0; startStr[startCount] != '\0'; startCount++)
    {
        decreaseDist = distToDot - startCount;

        if (startCount != 0 && decreaseDist > 0 && decreaseDist % 3 == 0)
        {
            finalStr[finalCount++] = ',';
        }
        finalStr[finalCount++] = startStr[startCount];
    }

    finalStr[finalCount] = '\0';

    cout << "finalStr: " << finalStr << endl;

    return 0;
};