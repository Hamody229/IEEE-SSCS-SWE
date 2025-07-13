#include "printf.h"

int my_toupper(int c)
{
    return (c >= 'a' && c <= 'z') ? (c - 32) : c;
}

int my_tolower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 32) : c;
}
