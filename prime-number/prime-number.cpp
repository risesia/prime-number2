#include <iostream>
#include <stdlib.h>
#include <vector>
#include "factorization.h"

using namespace std;

int main(void)
{
    int numInput = 0;
    int primeFact = 2;

    cout << "Check wether a nunber is prime number or not.\n" << endl;
    cout << "Input a number: " << endl;
    cin >> numInput;

    factorization f;
    if (numInput > 1) {
        f.doFact(numInput, primeFact);
    }
    else {
        system("cls");
        cout << numInput << " is not a prime number.";
        return 0;
    }

    if (f.factData[0] == 2) {
        cout << numInput << "is a prime number.";
    }
    else if (f.factData[0] == primeFact) {
        cout << numInput << "is not a prime number.";
    }
    else {
        cout << numInput << "is a prime number.";
    }


    return 0;
}
