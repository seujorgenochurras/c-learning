#include <stdio.h>
#include <stdbool.h>

#define TYPE_NAME(x) _Generic((x), \
    int: "int",                    \
    float: "float",                \
    double: "double",              \
    char: "char",                  \
    bool: "bool",                  \
    long: "long",                  \
    short: "short",                \
    default: "unknown")

int main()
{
  int x = 10;
  float y = 3.14;
  char z = 'a';

  printf("Type of x: %s\n", TYPE_NAME(x));
  printf("Type of y: %s\n", TYPE_NAME(y));
  printf("Type of z: %s\n", TYPE_NAME(z));

  return 0;
}
