#include <stdio.h>
#include "hamody_putchar.h"
int main()
{
    char alpha;
    char alpha1; 
    char alpha2; 

    for (int i = 0 ; i <10 ; i++ )
    {
        for (int j = 0 ; j < 10 ; j++ )
        {
            alpha = (i*j);
            if(alpha<10)
            {
                hamody_putchar(alpha+'0');
                hamody_putchar(',');
                hamody_putchar(' ');
            }
            else 
            {
                alpha1 = alpha %10 ;
                alpha2 = alpha /10 ;
                hamody_putchar(alpha2+'0');
                hamody_putchar(alpha1+'0');
                hamody_putchar(',');
                hamody_putchar(' ');
            }
        }
        hamody_putchar('\n');
    }
    return 0 ;
}