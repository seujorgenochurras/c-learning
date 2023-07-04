#ifndef UTILS_H
#define UTILS_H

// Header file contents go here

#define typeOf(T) _Generic((T),             \
    void *: VOID_PTR,                       \
    char: CHAR,                             \
    char *: CHAR_PTR,                       \
    short: SHORT,                           \
    long: LONG,                             \
    double: DOUBLE,                         \
    signed char: SIGNED_CHAR,               \
    unsigned char: UNSIGNED_CHAR,           \
    unsigned short: UNSIGNED_SHORT,         \
    unsigned int: UNSIGNED_INT,             \
    unsigned long: UNSIGNED_LONG,           \
    signed long long: SIGNED_LONG_LONG,     \
    unsigned long long: UNSIGNED_LONG_LONG, \
    float *: FLOAT_PTR,                     \
    double *: DOUBLE_PTR,                   \
    long double: LONG_DOUBLE,               \
    long double *: LONG_DOUBLE_PTR,         \
    default: FUCK_YOU)

typedef enum {
    CHAR_PTR,
    CHAR,
    INT,
    FLOAT,
    VOID,
    VOID_PTR,
    SHORT,
    LONG,
    DOUBLE,
    SIGNED_CHAR,
    UNSIGNED_CHAR,
    SIGNED_SHORT,
    UNSIGNED_SHORT,
    SIGNED_INT,
    UNSIGNED_INT,
    SIGNED_LONG,
    UNSIGNED_LONG,
    SIGNED_LONG_LONG,
    UNSIGNED_LONG_LONG,
    FLOAT_PTR,
    DOUBLE_PTR,
    LONG_DOUBLE,
    LONG_DOUBLE_PTR,
    ENUM,
    STRUCT,
    UNION,
    FUNCTION,
    FUNCTION_PTR,
    FUCK_YOU
} Type;
#endif
