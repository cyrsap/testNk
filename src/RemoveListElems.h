#ifndef NOKIATESTS_REMOVELISTELEMS_H
#define NOKIATESTS_REMOVELISTELEMS_H

#include "cstddef"

struct List {
    List * next;
    int payload;
};

void removeEveryNthElemFromList(List *aRoot, size_t aN);


#endif //NOKIATESTS_REMOVELISTELEMS_H
