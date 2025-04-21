#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    printf("The number is %d\n",n);
    if(n%2)
    {
        printf("odd number\n");
    }
    else 
    {
        printf("even number\n");
    }
    int m = n%10 ;
    printf("%d\n",m);

    if(m<0)
    {
        m = 0-m ;
    }
    printf("%d\n",m);

    if(m>5)
    {
        printf("the number is greater than 5 \n");
    }
    else 
    {
        printf("the number is less than 5 \n");
    }
    return (0);
}