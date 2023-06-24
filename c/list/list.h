typedef struct list
{
  char *rootArr;
  int lastIndexBeeingUsed;
  int totalSize;
  int updateSizeFactor;
}List;

//TODO add full generic declarations
List *createList(int initialListSize, float updateSizeFactor);

List *addElementToList(List *list, int element);

List *removeIndexFromList(List *list, int *index);

void updateListSize(List *list, long long newSize);

int listNeedsToUpdateSize(List *list);

void freeList(List *list);

List *decreaseListTotalSize(List *list, int *decreaseAmmount);
