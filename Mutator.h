#ifndef MUTATOR_H
#define MUTATOR_H
#include <iostream>
#include <string>
#include "Individual.h"

class Mutator
{
    public:
    virtual Individual* mutate(Individual* list, int k)=0;
};

#endif