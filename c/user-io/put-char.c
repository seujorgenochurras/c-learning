#include <stdio.h>
#include <stdlib.h>

__declspec(dllexport) int countCharsFromUser(char *charToRead) {
    int charsFound = 0;
    char currentChar;
    while ((currentChar = getchar()) != EOF) {
        if (currentChar == *charToRead) {
            charsFound++;
        }
    }
    return charsFound;
}

__declspec(dllexport) void getASCIITableValues(int *from, int *to) {
    for (int i = *from; i < *to; i++) {
        putchar(i);
    }
}

__declspec(dllexport) void printYes(){
    puts("yes");
}

// List* getTextFromUser() {
//     List *userChars = createList(10, 1);
//     char currentChar;
//     while ((currentChar = getchar()) != '!') {
//         addElementToList(userChars, currentChar);
//     }
//     return userChars;
// }

// void removeTabsFromChars(List *userChars) {
//     for (int i = 0; i < userChars->lastIndexBeeingUsed; i++) {
//         if (userChars->rootArr[i] == '\t') {
//             userChars->rootArr[i] = '\\';
//             userChars->rootArr[++i] = 't';
//         }
//     }
// }

// #define typefo(T) printTypeOf(typeOf(T))
// void printTypeOf(Type type) {
//     printf("%d", type);
// }




