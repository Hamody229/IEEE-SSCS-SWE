#include "printf.h"

int print_reverse(const char *str)
{
    int len = 0, count = 0;

    if (!str)
        str = "(nil)";

    while (str[len])
        len++;

    while (len--)
        count += _putchar(str[len]);

    return count;
}
