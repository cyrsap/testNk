#include "TextAndLetters.h"

#include <boost/algorithm/string.hpp>

LettersStats getLettersStats(const std::string &aText)
{
    std::vector<std::string> splitted;

    boost::split(splitted, aText, boost::is_any_of(" "), boost::token_compress_on);

    LettersStats result;
    for (const auto &word : splitted) {
        size_t sz = word.size();
        auto found = result.find(sz);
        if (found == result.end()) {
            result[sz] = 1;
        }
        else {
            ++result[sz];
        }
    }

    return result; // copy elision
}
