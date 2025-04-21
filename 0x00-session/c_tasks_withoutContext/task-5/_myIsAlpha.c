#include "_myIsAlpha.h"
#include <stdio.h>

void _myIsAlpha (char alpha)
{
    if(alpha>=65 && alpha<=90 || alpha>=97 && alpha<=122)
    {
        printf("This is an alphabet");
    }
    else 
    {
        printf("This is not an alphabet");
    }
    
}