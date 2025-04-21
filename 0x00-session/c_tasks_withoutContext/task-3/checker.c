#include <stdio.h>

int main ()
{
    char alpha ; 
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90)
    {
        printf("UpperCase");
    }
    else if (alpha>=97 && alpha<=122)
    {
        printf("LowerCase");
    }
    else 
    {
        printf("not an alphabet");
    }
    return 0 ;
}