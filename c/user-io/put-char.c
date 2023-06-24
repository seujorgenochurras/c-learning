#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../utils/utils.h"
#include "../list/list.h"
int countCharsFromUser(char *charToRead)
{
  int charsFound = 0;
  char currentChar;
  while ((currentChar = getchar()) != EOF)
  {
    if (currentChar == *charToRead)
    {
      charsFound++;
    }
  }
  return charsFound;
}

void getASCIITableValues(int *from, int *to)
{
  for (int i = *from; i < *to; i++)
  {
    putchar(i);
  }
}

char *getTextFromUser(int *)
{
  char currentChar;
  while ((currentChar = getchar()) != EOF)
  {
  }
}

#define typefo(T) printTypeOf(typeOf(T))
void printTypeOf(Type type)
{
  printf("%d", type);
}

int main()
{
  float startTime = (float)clock() / CLOCKS_PER_SEC;

  List *list = createList(222, 1);
  for (int i = 0; i < 120000; i++) {
    for (int j = 65; j < 122; j++) {
      addElementToList(list, j);
    }
  }
  printf("list size is %d\n", list->totalSize);

  freeList(list);

  float endTime = (float)clock() / CLOCKS_PER_SEC;

  float timeElapsed = endTime - startTime;

  printf("took %f", timeElapsed);
  return 0;
}
