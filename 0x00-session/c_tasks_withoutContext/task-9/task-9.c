#include <stdio.h>
#include "hamody_putchar.h"
int main()
{
    char alpha;
    char alpha1; 
    char alpha2; 
    char alpha3; 

    int n ;
    scanf("%d",&n);
    for (int i = 0 ; i <n+1 ; i++ )
    {
        for (int j = 0 ; j < n+1 ; j++ )
        {
            alpha = (i*j);
            if(alpha<10)
            {
                hamody_putchar(alpha+'0');
                hamody_putchar(',');
                hamody_putchar(' ');
            }
            else if(alpha>=10 && alpha <100) 
            {
                alpha1 = alpha %10 ;
                alpha2 = alpha /10 ;

                hamody_putchar(alpha2+'0');
                hamody_putchar(alpha1+'0');
                hamody_putchar(',');
                hamody_putchar(' ');
            }
            else
            {
                alpha1 = alpha %10 ;
                alpha2 = (alpha /10)%10  ;
                alpha3 = alpha /100 ;

                hamody_putchar(alpha3+'0');
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