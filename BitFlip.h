#ifndef _BITFLIP_H
#define _BITFLIP_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip : public Mutator
{
    public:
    Individual* mutate(Individual* list, int k);
    private:
    int lengthOfList;
    int reminder;
};

#endif