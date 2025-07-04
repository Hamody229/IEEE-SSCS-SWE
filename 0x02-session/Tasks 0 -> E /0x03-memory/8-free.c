#include <stdio.h>
#include <stdlib.h>
void free_array(int *arr)
{
    if (arr == NULL)
    return;
    
    free(arr);
    arr = NULL ;
}

int main()
{
    int *arr = malloc(4*sizeof(int));
    for (int i = 0 ; i < 4 ; i++ )
    {
        arr[i] = i+1 ; 
        printf("arr[%d] = %d\n",i , arr[i]);
    }

    free_array(arr);
    return 0 ; 
}