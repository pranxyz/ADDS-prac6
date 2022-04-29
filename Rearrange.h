#ifndef REARRANGE_H
#define REARRANGE_H
#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"

class Rearrange :public Mutator
{
    public:
    Individual* mutate(Individual* list, int k);
    private:
    int lengthOfList;
    int reminder;
};

#endif