#include "MaxAndMinNumber.h"

#include <iostream>

std::pair<uint32_t, uint32_t> getMinAndMaxFrom32bitbits(uint32_t aValue)
{
    // count set bits
    uint8_t bitsQuan = 0;
    uint32_t min = 0, max = 0;
    for (uint8_t i = 0; i < 32; ++i) {
        if (aValue % 2) {
            ++bitsQuan;
            min <<= 1;
            min |= 0x01;
        }
        aValue >>= 1;
    }

    max |= min;
    max = max << (32 - bitsQuan);

    std::cout << std::hex << "Min: 0x" << min << " Max: 0x" << max << std::dec << std::endl;

    return {min, max};
}
