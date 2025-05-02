#include <stdio.h>

int counter(char *mystring)
{
    int count = 0;
    int flag = 0;

    for(int i = 0; mystring[i] != '\0'; i++)
    {
        if(mystring[i] != ' ' && mystring[i] != '\t' && mystring[i] != '\n' && mystring[i] != '\r')
        {
            if (flag == 0) {
                count++;        
                flag = 1;
            }
        }
        else
        {
            flag = 0;       
        }
    }

    return count;
}

int main()
{
    char str[] = "    Ahmed                    Eslam                    Ahmed     ";
    int i = counter(str);
    printf("Word count: %d\n", i);  
    return 0;
}
