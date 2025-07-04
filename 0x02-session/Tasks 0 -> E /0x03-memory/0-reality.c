#include <stdio.h>

void status (int n)
{
    if(n>0)
    {
        printf("Positive");
    }    
    else if(n<0)
    {
        printf("Negative");
    }
    else 
    {
        printf("Zero");
    }
}

int main ()
{
    int number = 2; 
    void (*ptr)(int) = &status ;
    ptr(number);

    return 0 ;
}