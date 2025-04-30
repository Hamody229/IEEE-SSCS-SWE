#include <stdio.h>

int main ()
{
    int variable_signal = 98;
    int *ptr = &variable_signal;
    printf ("the address is : %p , the value is : %d",ptr,*ptr);

    return 0 ;

}