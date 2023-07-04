#include "list.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***
 * update size factor should not be >1
 * trust me, it will fuck your memory
 */
List *createList(int initialListSize, float updateSizeFactor) {
    List *new_list = (List *)malloc(sizeof(List));
    new_list->rootArr = malloc(initialListSize * sizeof(char *));
    new_list->totalSize = initialListSize;
    new_list->lastIndexBeeingUsed = 0;
    new_list->updateSizeFactor = initialListSize * 1 + updateSizeFactor;
    return new_list;
}

int listNeedsToUpdateSize(List *list) {
    if (list->updateSizeFactor > list->totalSize - list->lastIndexBeeingUsed) {
        return 1;
    }
    return 0;
}
void updateListSize(List *list, long long newSize) {
    list->rootArr = realloc(list->rootArr, sizeof(char) * newSize);
 
    list->totalSize = newSize;
}

List *addElementToList(List *list, int element) {
    if (listNeedsToUpdateSize(list)) {
        updateListSize(list, list->totalSize + list->updateSizeFactor * sizeof(char));
    }

    list->rootArr[list->lastIndexBeeingUsed] = element;
    list->lastIndexBeeingUsed++;
    return list;
}


void freeList(List *list) {
    free(list);
}

List *removeIndexFromList(List *list, int *index) {
    printf("TODO\n ");
    return list;
}
List *decreaseListTotalSize(List *list, int *decreaseAmmount) {
    // TODO
    return list;
}
