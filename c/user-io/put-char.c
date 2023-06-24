#include <stdio.h>
#include <stdlib.h>

#include "../list/list.h"
#include "../utils/utils.h"
int countCharsFromUser(char *charToRead) {
    int charsFound = 0;
    char currentChar;
    while ((currentChar = getchar()) != EOF) {
        if (currentChar == *charToRead) {
            charsFound++;
        }
    }
    return charsFound;
}

void getASCIITableValues(int *from, int *to) {
    for (int i = *from; i < *to; i++) {
        putchar(i);
    }
}
List* getTextFromUser() {
    List *userChars = createList(10, 1);
    char currentChar;
    while ((currentChar = getchar()) != '!') {
        addElementToList(userChars, currentChar);
    }
    return userChars;
}
void removeTabsFromChars(List *userChars) {
    for (int i = 0; i < userChars->lastIndexBeeingUsed; i++) {
        if (userChars->rootArr[i] == '\t') {
            userChars->rootArr[i] = '\\';
            userChars->rootArr[++i] = 't';
        }
    }
}
#define typefo(T) printTypeOf(typeOf(T))
void printTypeOf(Type type) {
    printf("%d", type);
}

int main() {
    List* userText = getTextFromUser();
    removeTabsFromChars(userText);
    for (int i = 0; i < userText->lastIndexBeeingUsed; i++){
        printf("%c", userText->rootArr[i]);
    }
    return 0;
 }

