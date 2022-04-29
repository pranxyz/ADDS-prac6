#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlipProb : public Mutator
{
    public:
    Individual* mutate(Individual* list, int k);
    private:
    double p;
};

#endif