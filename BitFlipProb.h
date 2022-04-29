#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlipProb : public Mutator
{
    public:
    BitFlipProb(double);
    private:
    double p;
};

#endif
