#ifndef _MUTATOR_H
#define _MUTATOR_H
#include <iostream>
#include <string>
#include "Individual.h"

class Mutator
{
    public:
    virtual Individual* mutate(Individual* list, int k)=0;
};

#endif