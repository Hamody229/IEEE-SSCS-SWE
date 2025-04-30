#include <stdio.h>

void print_message(char *msg)
{
    printf ("%s\n",msg);

}
int main()
{
    char ARR[]="Ahmed Eslam";

    print_message(&ARR[0]);
    print_message(ARR);

    return 0;
}