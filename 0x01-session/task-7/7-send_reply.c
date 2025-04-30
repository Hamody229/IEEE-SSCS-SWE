#include <stdio.h>
char *get_reply()
{
    return "Hamody" ;
}
int main()
{
    char *ARR = get_reply();
    printf ("%s",ARR);
    return 0 ;
}