#include <stdio.h>
int sumDigits (long long int n) 
{
    if(n < 0 )
    {
        n = -n ;
    }
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}


int main ()
{
    printf("%d",sumDigits(123));
    return 0 ;
}