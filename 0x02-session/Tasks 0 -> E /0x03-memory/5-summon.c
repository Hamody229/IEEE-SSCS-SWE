#include <stdio.h>
#include <stdlib.h>

int *summon_allies(int *allies, int n)
{
    allies = malloc(n * sizeof(int));

    if (allies == NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &allies[i]);
    }

    return allies;
}

int main(void)
{
    int n;
    int *my_allies = NULL;

    printf("How many allies do you want to summon? ");
    scanf("%d", &n);

    my_allies = summon_allies(my_allies, n);

    if (my_allies == NULL)
        return 1; 
    printf("You have summoned the following allies:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Ally %d: %d\n", i + 1, my_allies[i]);
    }

    free(my_allies); 
    return 0;
}
