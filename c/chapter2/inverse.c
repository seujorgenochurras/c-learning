#include <stdlib.h>
#include <stdio.h>

char* reverse(char charArr[], int arrSize) {
    char* inverseArr = malloc(arrSize * sizeof(char));
    int index = 0;
    for (int i = arrSize-2; i >= 0; i--) {
        inverseArr[index++] = charArr[i];
    }
    inverseArr[arrSize-1] = '\0';
    return inverseArr;
}

int main() {
    char mystr[] = "aula vaga";
    char* reversedStr = reverse(mystr, 10);
    printf("%s", reversedStr);

    return 0;
}
