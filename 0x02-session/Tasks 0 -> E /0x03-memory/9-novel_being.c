#include <stdio.h>

struct Being {
    char *name ;
    int age ; 
    float energy_level;
};

void print_being(struct Being *b)
{
    b->name = "ahmed";
    b->age  = 21;
    b->energy_level = 100;
    printf("Name: {%s}, Age: {%d}, Energy: {%0.2f}",b->name,b->age,b->energy_level);
}

int main ()
{
    struct Being ahmed ;
    print_being(&ahmed);

    return 0 ;
}