#include "Mutator.h"
#include "BitFlipProb.h"
#include "Individual.h"
#include <iostream>
#include <string>
using namespace std;

BitFlipProb::BitFlipProb(double t)
{
    p=t;
};