#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void *clear_allocation(size_t count, size_t size)
{
    int *my_calloc = malloc(sizeof(size)*count);
    memset(my_calloc,0,sizeof(size));
    return my_calloc ;

}
int main()
{
    int count = 100 ;
    int size ;
    int *Test = malloc(count*sizeof(size)); 
    
    for (int j = 0 ; j < 100 ; j++)
    {
        Test[j] = rand() % (10 - 0 + 1) + 0;
    }
    
    for(int i = 0 ; i < 100 ; i++)
    {
        printf("Data before reset :%d\n",Test[i]);
    }

    
    printf("*******************************************\n");

    Test = clear_allocation(count , sizeof(size));
    

    for(int k = 0 ; k < 100 ; k++)
    {
        printf("Data after reset :%d\n",Test[k]);
    }

}