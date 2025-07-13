#include "printf.h"

int print_pointer(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    int count = 0;

    if (!ptr)
        return _printf("(nil)");

    count += _putchar('0');
    count += _putchar('x');

    char digits[32];
    int i = 0;
    char *symbols = "0123456789abcdef";

    while (addr)
    {
        digits[i++] = symbols[addr % 16];
        addr /= 16;
    }

    while (i--)
        count += _putchar(digits[i]);

    return count;
}
int print_unsigned_base(unsigned int n, int base, int uppercase)
{
    char digits[32];
    char *symbols = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0, count = 0;

    if (n == 0)
        return _putchar('0');

    while (n)
    {
        digits[i++] = symbols[n % base];
        n /= base;
    }

    while (i--)
        count += _putchar(digits[i]);

    return count;
}
