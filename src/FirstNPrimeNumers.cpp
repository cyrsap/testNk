#include "FirstNPrimeNumers.h"

std::vector<size_t> getFirstNPrimeNumbers(size_t aN)
{
    std::vector<size_t> result;

    if (aN == 0) {
        return result;
    }

    result.reserve(aN);

    size_t foundQuan = 1;
    result.push_back(2);

    size_t currValue = 3;

    while (foundQuan < aN) {
        bool prime = true;
        for (auto elem : result) {
            if (currValue % elem == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            result.push_back(currValue);
            ++foundQuan;
        }
        currValue += 2;
    }

    return result; // copy elision;
}
