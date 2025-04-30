#include <stdio.h>
void echo(int n)
{
    if(n>=0)
    {
        printf("%d: Echo...\n",n);
        return echo(n-1);
    }
    else 
    {
        printf("Finish");
    }
}

int main ()
{
    echo(8);
    return 0 ;

}