#include "hamody_putchar.h"
int main()
{
    for(int i = 97 ; i < 123 ; i++)
    {
        hamody_putchar(i);
    }
    for(int i = 90 ; i > 64 ; i--)
    {
        if(i==81){
            continue;
        }
        else{
            hamody_putchar(i);
        }
    }
}