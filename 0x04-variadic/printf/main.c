#include "printf.h"

int main()
{
    int x = 42;
    int *ptr = &x;
    _printf("Char: %c\n", 'A');
    _printf("String: %s\n", "Hello World");
    _printf("Percent: %%\n");
    _printf("Integer: %d\n", 1234);
    _printf("Negative: %i\n", -567);
    _printf("Mix: %s %d %c\n", "Score:", 100, '!');
    _printf("Binary of 5: %b\n", 5);       
    _printf("Binary of 255: %b\n", 255);    
    _printf("Binary of 0: %b\n", 0);       
    _printf("Binary of 1024: %b\n", 1024);  
    _printf("Unsigned: %u\n", 4294967295U);
    _printf("Octal: %o\n", 83);        
    _printf("Hex lowercase: %x\n", 305441741); 
    _printf("Hex UPPERCASE: %X\n", 305441741); 


    _printf("Pointer address: %p\n", ptr);
    _printf("NULL pointer: %p\n", NULL);

    _printf("Normal: %s\n", "TeSt");
    _printf("Lower: %_s\n", "TeSt");
    _printf("Upper: %=s\n", "TeSt");

    _printf("Char: %c\n", 'a');
    _printf("Lower Char: %_c\n", 'A');
    _printf("Upper Char: %=c\n", 'z');

    _printf("Invalid switch: %_d\n", 42);


    _printf("Plus: %+d\n", 42);
    _printf("Left: %-5d!\n", 42);
    _printf("Right: %5d!\n", 42);
    _printf("Space: % d\n", 42);
    _printf("Reverse: %r\n", "hello");
    _printf("Reverse null: %r\n", NULL);
    return 0;
}
