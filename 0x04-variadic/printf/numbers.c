#include "printf.h"
int print_number(int n)
{
    unsigned int num;
    int count = 0;

    if (n < 0)
    {
        count += _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    count += _putchar((num % 10) + '0');
    return count;
}
int print_number_flags(int n, int width, int left_align, int force_sign)
{
    char buffer[20];
    int len = 0, i = 0, count = 0, neg = 0;
    unsigned int num;

    if (n < 0)
    {
        neg = 1;
        num = -n;
    }
    else
    {
        num = n;
    }

    // Convert number to string (reverse)
    do {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    } while (num);
    if (n >= 0 && force_sign)
        buffer[i++] = '+';
    else if (neg)
        buffer[i++] = '-';

    len = i;

    if (!left_align)
        for (; width > len; width--)
            count += _putchar(' ');

    while (i--)
        count += _putchar(buffer[i]);

    if (left_align)
        for (; width > len; width--)
            count += _putchar(' ');

    return count;
}

