#include "printf.h"

int _putchar(int c)
{
    return write(1, &c, 1);
}
