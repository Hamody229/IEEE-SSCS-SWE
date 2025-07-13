#include <stdio.h>
#include <stdarg.h>

void pretty_printer(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));
        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(args);
}


int main()
{
    pretty_printer(", ", 4, 10, 20, 30, 40);
    pretty_printer(" | ", 3, 100, 200, 300);
    pretty_printer(NULL, 2, 7, 8);
    pretty_printer(" - ", 1, 99);
    return 0;
}
