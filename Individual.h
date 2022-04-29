#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <iostream>
#include <string>

class Individual
{
    public:
    Individual(int);
    Individual (std::string bin_str);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    void rearrangeBit(int pos);
    private:
    std::string binaryString;
    int length;
    std::string copyOfList;
    std::string rearrange_binaryString;
};

#endif
