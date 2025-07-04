#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

void *_reshape(void *ptr, size_t old_size, size_t new_size)
{
    if (ptr == NULL)
    {
        return malloc(new_size);  
    }

    if (new_size == 0)
    {
        free(ptr);  
        return NULL;
    }

    void *new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;  
    }

    size_t size = old_size < new_size ? old_size : new_size;
    memcpy(new_ptr, ptr, size);

    free(ptr); 

    return new_ptr;  
}
int main()
{
    int *arr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    arr = _reshape(arr, 5 * sizeof(int), 10 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);  
    }
    free(arr);
    return 0;
}