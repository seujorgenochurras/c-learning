#include <stdio.h>
#include <stdlib.h>

int main (){
    double* myIntArr = (int*)malloc(32 * sizeof(int));
    *myIntArr = 11917827230.13189189723782;
    *(myIntArr + 1) = 20;
    printf("first hting is %f\n", myIntArr[0]);
    printf("Secodns  hting is %d\n", myIntArr[1]);
    printf("Third hting is %d\n", myIntArr[2]);
    printf("Fourth  hting is %d\n", myIntArr[3]);
    printf("Fifth  hting is %d\n", myIntArr[4]);
    printf("Sixth hting is %d\n", myIntArr[5]);
    printf("Seventh  hting is %d\n", myIntArr[6]);

    return 0;
}