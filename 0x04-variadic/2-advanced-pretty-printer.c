#include <stdio.h>
#include <stdarg.h>

void advanced_pretty_printer(const char flag, const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        if (flag == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (flag == 's')
        {
            char *str = va_arg(args, char *);
            if (str)
                printf("%s", str);
            else
                printf("(nil)");
        }

        if (separator && i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
int main()
{
    printf("Integers:\n");
    advanced_pretty_printer('i', " | ", 4, 1, 2, 3, 4);

    printf("Strings:\n");
    advanced_pretty_printer('s', " - ", 3, "hello", "world", "GPT");

    printf("Mix test with null string:\n");
    advanced_pretty_printer('s', ", ", 3, "AI", NULL, "rocks");

    return 0;
}
