#include "LoadingStage.h"

 int charStageArr[] = {0x2801, 0x2803, 0x2807,
 0x2826, 0x2834, 0x2838, 0x2819, 0x2809};

#define sizeOfIntArr(arr) sizeof(arr) / sizeof(arr[0])


void updateLoadingCharStatus(LoadingStage *loadingStagePtr){
    if(loadingStagePtr->currentCharIndex == sizeOfIntArr(charStageArr)-1){
        loadingStagePtr->currentCharStage = charStageArr[0];
        loadingStagePtr->currentCharIndex = 0;
    }else{
        loadingStagePtr->currentCharIndex++;
        loadingStagePtr->currentCharStage = charStageArr[loadingStagePtr->currentCharIndex];
    }
}


LoadingStage newLoadingStage(){
    LoadingStage newLoadingStage;
    newLoadingStage.currentCharStage = charStageArr[0];
    newLoadingStage.currentCharIndex = 0;
    return newLoadingStage;
}
