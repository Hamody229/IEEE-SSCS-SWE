#include <stdio.h>

int is_strong_signal(int strength)
{
    if(strength>50)
    {
        return 1 ; 
    }
    else
    {
        return 0 ;
    }
}
void check_signal(int strength)
{
    if (is_strong_signal(strength)>0)
    {
        printf("Strong signal detected.\n");
    }
    else 
    {
        printf("No signal detected.\n");
    }
}

int main ()
{
    check_signal(20);
    check_signal(50);
    check_signal(100);
    check_signal(200);
    check_signal(0);
   
    
    return 0 ;
}