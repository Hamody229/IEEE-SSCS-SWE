#include <stdio.h>

#define BAD_SQUARE(x) x * x

#define SQUARE(x) ((x) * (x))

int main()
{
    int a = 3;
    int b = 1 + 2;

    printf("BAD_SQUARE(3) = %d\n", BAD_SQUARE(3));    
    printf("BAD_SQUARE(1 + 2) = %d\n", BAD_SQUARE(1 + 2)); 

    printf("SQUARE(3) = %d\n", SQUARE(3));                 
    printf("SQUARE(1 + 2) = %d\n", SQUARE(1 + 2));         

    return 0;
}
