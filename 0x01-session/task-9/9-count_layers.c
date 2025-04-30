#include <stdio.h>

int sum_layers(int n)
{

    if (n>0)
    {
        return n + sum_layers(n-1);
    }

}
int main ()
{

    int test = sum_layers(10);
    printf ("%d",test);
    return 0 ;
}