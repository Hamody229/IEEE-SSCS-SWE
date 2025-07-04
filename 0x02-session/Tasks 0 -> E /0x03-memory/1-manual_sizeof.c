#include <stdio.h>

int manual_sizeof(int n)
{
    int *ptr = &n ;
    int *size = ptr + 1 ;
 
    printf("%ld\n",(char *)size-(char *)ptr);
}
int main ()
{
    int integer = 0 ;
    manual_sizeof(integer);

    return 0 ;
}