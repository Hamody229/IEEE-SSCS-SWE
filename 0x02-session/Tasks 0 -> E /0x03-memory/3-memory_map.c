#include <stdio.h>
#include <stdlib.h>

int global ;

int main ()
{
    int local ;
    int *ptr ;
    ptr = (int *)malloc(sizeof(int));
    char *str = "Ahmed Eslam" ;


    printf("(%p:BSS)->%d\n",&global , global);
    printf("(%p:stackSegment)->%d\n",&local , local);
    printf("(%p:heapSegment)->%d\n",ptr , *ptr);
    printf("(%p:BSS)->%s\n",str , str);
}