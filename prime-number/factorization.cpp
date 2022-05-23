#include "factorization.h"

int factorization::doFact(int numInput, int primeFact)
{
    vector<int> factData;

    if (numInput == primeFact) {
        return 0;
    }
    else {
        if (numInput % primeFact == 0) {
            factData.push_back(primeFact);
            return 0;
        }
        else {
            return doFact(numInput, primeFact++);
        }
    }
}
