#ifndef ZADBIN2DEC_H
#define ZADBIN2DEC_H

#include <vector>

class ZadBin2Dec {
public:
    static std::vector<int> binaryToDecimal(int binary);
    static void printDecimal(const std::vector<int>& decimal);
};

#endif
