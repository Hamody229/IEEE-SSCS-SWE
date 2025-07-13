#include "printf.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    int width = 0, left_align = 0, force_sign = 0;
    char *str;
    char ch;

    if (!format)
        return -1;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;

            width = 0;
            left_align = 0;
            force_sign = 0;

            if ((format[i] == '_' || format[i] == '=') && (format[i + 1] == 's' || format[i + 1] == 'c'))
            {
                char mode = format[i]; 
                char type = format[i + 1];
                i += 1;

                if (type == 's') {
                    str = va_arg(args, char *);
                    if (!str) str = "(nil)";
                    while (*str)
                    {
                        count += _putchar((mode == '_') ? my_tolower(*str) : my_toupper(*str));
                        str++;
                    }
                }
                else { 
                    ch = va_arg(args, int);
                    count += _putchar((mode == '_') ? my_tolower(ch) : my_toupper(ch));
                }
                i++;
                continue;
            }

            while (format[i] == '+' || format[i] == '-' || format[i] == ' ')
            {
                if (format[i] == '+') force_sign = 1;
                if (format[i] == '-') left_align = 1;
                i++;
            }

            while (format[i] >= '0' && format[i] <= '9')
            {
                width = width * 10 + (format[i] - '0');
                i++;
            }

            switch (format[i])
            {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (!str) str = "(nil)";
                    while (*str) count += _putchar(*str++);
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                case 'd':
                case 'i':
                    count += print_number_flags(va_arg(args, int), width, left_align, force_sign);
                    break;
                case 'b':
                    count += print_binary(va_arg(args, unsigned int));
                    break;
                case 'u':
                    count += print_unsigned_base(va_arg(args, unsigned int), 10, 0);
                    break;
                case 'o':
                    count += print_unsigned_base(va_arg(args, unsigned int), 8, 0);
                    break;
                case 'x':
                    count += print_unsigned_base(va_arg(args, unsigned int), 16, 0);
                    break;
                case 'X':
                    count += print_unsigned_base(va_arg(args, unsigned int), 16, 1);
                    break;
                case 'p':
                    count += print_pointer(va_arg(args, void *));
                    break;
                case 'r':
                    count += print_reverse(va_arg(args, char *));
                    break;
                default:
                    count += _putchar('%');
                    count += _putchar(format[i]);
                    break;
            }
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return count;
}
