#include <stdio.h>

void access_one(int n)
{
    int counter = n ;
    printf("%d\n",counter++);
}
void access_two(int n)
{
    static int counter;
    static int initialized = 0;

    if (!initialized) {
        counter = n;
        initialized = 1;
    }

    printf("%d\n", counter++);
}

int main()
{
    int counter = 1 ;
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);
    access_one(counter);

    printf("_*_*_*_*_*_*_*_*_*_*_H_A_M_O_D_Y_*_*_*_*_*_*_*_*_*_*_*_*_*\n");

    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);
    access_two(counter);


    return 0 ;
}