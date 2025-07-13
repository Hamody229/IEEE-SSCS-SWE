#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(int c);
int _printf(const char *format, ...);
int print_number(int n);
int print_binary(unsigned int n);
int print_unsigned_base(unsigned int n, int base, int uppercase);
int print_pointer(void *ptr);
int my_toupper(int c);
int my_tolower(int c);
int print_number_flags(int n, int width, int left_align, int force_sign);
int print_reverse(const char *str);

#endif 
