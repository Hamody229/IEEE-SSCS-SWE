#include <stdio.h>

void realSwap (char **arr ,char **arr2)
{
    char *temp = *arr ;
    *arr = *arr2 ; 
    *arr2 = temp ;
}
// void fakeSwap (char *arr ,char *arr2)
// {
//     char *temp = *arr ;
//     *arr = *arr2 ; 
//     *arr2 = *temp ;
// }

int main ()
{
    char *arr= "Ahmed" ; 
    char *arr2= "Eslam" ;
    // fakeSwap(arr,arr2);
    // printf("%s \n %s",arr , arr2)    ;

    realSwap(&arr,&arr2);
    printf("%s \n %s",arr , arr2)    ;
    
    return 0 ;
}