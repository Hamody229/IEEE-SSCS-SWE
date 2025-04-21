#include <stdio.h>

int main (){

    int num = 0 ;
    printf("please enter number from 1 to 9 :");
    scanf("%d",&num);

    if (num >= 1 && num<=9)
    {
        printf("%c\n",num+'0');
    }
    else 
    {
        printf("why you didn't read the intruction ???");
    }
    return 0 ;
}