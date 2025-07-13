#include "printf.h"

int print_binary(unsigned int n)
{
    int count = 0;
    int started = 0;
    unsigned int mask = 1 << 31; 

    if (n == 0)
        return _putchar('0');

    while (mask)
    {
        if (n & mask)
        {
            started = 1;
            count += _putchar('1');
        }
        else if (started)
        {
            count += _putchar('0');
        }
        mask >>= 1;
    }

    return count;
}
