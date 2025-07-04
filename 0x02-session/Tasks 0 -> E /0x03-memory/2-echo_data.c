#include <stdio.h>

enum Type { TYPE_FLOAT, TYPE_INT, TYPE_CHAR_PTR, TYPE_LONGLONG };

void echo_data(void *data, enum Type type)
{
    switch(type)
    {
        case TYPE_FLOAT:
            printf("%f\n", *(float *)data);
            break;
        case TYPE_INT:
            printf("%d\n", *(int *)data);
            break;
        case TYPE_CHAR_PTR:
            printf("%s\n", (char *)data);  
            break;
        case TYPE_LONGLONG:
            printf("%lld\n", *(long long int *)data);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main()
{
    int number = 2;
    float pi = 3.14f;
    char *msg = "Hamody";
    long long int big = 1234567890123LL;

    echo_data(&number, TYPE_INT);
    echo_data(&pi, TYPE_FLOAT);
    echo_data(msg, TYPE_CHAR_PTR);  
    echo_data(&big, TYPE_LONGLONG);

    return 0;
}
