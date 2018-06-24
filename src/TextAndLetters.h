#ifndef NOKIATESTS_TEXTANDLETTERS_H
#define NOKIATESTS_TEXTANDLETTERS_H

#include <string>
#include <unordered_map>

using LettersStats = std::unordered_map<size_t, size_t>;

LettersStats getLettersStats(const std::string &aText);

#endif //NOKIATESTS_TEXTANDLETTERS_H
