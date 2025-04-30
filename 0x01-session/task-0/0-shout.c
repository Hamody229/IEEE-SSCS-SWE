#include <stdio.h>

void repeat_message(int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        printf("%d: Hello, world.\n",i);
    }
}

int main ()
{
    repeat_message(8);

    return 0 ;
}