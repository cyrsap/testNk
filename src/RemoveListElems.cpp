#include <iostream>
#include "RemoveListElems.h"

void removeEveryNthElemFromList(List *aRoot, size_t aN)
{
    size_t counter = 0;

    List *prev = nullptr;
    List *curr = aRoot;

    while (curr) {
        ++counter;

        if (counter == aN) {
            List * buff = curr->next;
            prev->next = buff;
            delete curr;
            counter = 0;
        }

        if (counter != 0) {
            prev = curr;
        }

        curr = prev->next;
    }

}
