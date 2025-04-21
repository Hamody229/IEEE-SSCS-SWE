#include"hamody_putchar.h"
#include <unistd.h>

char hamody_putchar(char letter)
{
    return (write(1,&letter,1));
}
