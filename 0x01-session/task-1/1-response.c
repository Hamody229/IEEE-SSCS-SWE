#include <stdio.h>

int is_repeat_message(int strength)
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
int main()
{
    int test ; 
    test = is_repeat_message(70);
    printf("The value is : %d\n",test);

    test = is_repeat_message(20);
    printf("The value is : %d\n",test);

    test = is_repeat_message(500);
    printf("The value is : %d\n",test);

    test = is_repeat_message(1);
    printf("The value is : %d\n",test);

    test = is_repeat_message(50);
    printf("The value is : %d\n",test);

    return 0 ;
}