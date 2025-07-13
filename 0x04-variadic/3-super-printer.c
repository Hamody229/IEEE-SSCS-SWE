#include <stdio.h>
#include <stdarg.h>

void super_printer(const char *flag, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char current;

    va_start(args, flag);

    while (flag && flag[i])
    {
        current = flag[i];
        switch (current)
        {
        case 'i':
            printf("%d", va_arg(args, int));
            break;
        case 'f':
            printf("%f", va_arg(args, double)); 
            break;
        case 'c':
            printf("%c", va_arg(args, int)); 
            break;
        case 's':
            str = va_arg(args, char *);
            printf("%s", str ? str : "(nil)");
            break;
        default:
            i++;
            continue;
        }

        if (flag[i + 1])
            printf(", ");

        i++;
    }

    printf("\n");
    va_end(args);
}

int main()
{
    printf("Mixed types:\n");
    super_printer("ifcs", 42, 3.14, 'A', "Hello");

    printf("Only strings:\n");
    super_printer("sss", "one", NULL, "three");

    printf("Invalid flags included:\n");
    super_printer("ixfy", 100, 7.77, 'Z', "Extra");

    return 0;
}
