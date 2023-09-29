#ifndef ZADDEC2BIN_H
#define ZADDEC2BIN_H

#include <vector>

class ZadDec2Bin {
public:
    static std::vector<int> decimalToBinary(int decimal);
    static void printBinary(const std::vector<int>& binary);
};

#endif