#ifndef _REARRANGE_H
#define _REARRANGE_H
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