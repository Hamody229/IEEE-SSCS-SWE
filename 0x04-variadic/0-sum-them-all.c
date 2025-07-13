#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return 0;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}
int main()
{
    printf("Sum 1: %d\n", sum_them_all(2, 5, 10));
    printf("Sum 2: %d\n", sum_them_all(4, 1, 2, 3, 4));
    printf("Sum 3: %d\n", sum_them_all(0));
    printf("Sum 4: %d\n", sum_them_all(3, 100, 200, 300));
    return 0;
}