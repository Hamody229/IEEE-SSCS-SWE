#include "hamody_putchar.h"

int main()
{
    int flag = 0 ;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int i = 97 ; i<123 ; i++)
        {
            hamody_putchar(i);
        }
        hamody_putchar('\n');
    }
}