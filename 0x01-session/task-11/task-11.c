#include <stdio.h>

void my_putchar(FILE *fp, char c) {
    if (fp != NULL) {
        fputc(c, fp);
    }
}
int my_atoi(char *ARR)
{
    int temp = 0 ;
    int found_digit = 0 ; 
    int sign = 1 ;
    for(int i = 0 ;ARR[i]!='\0' ; i++)
    {   
        if (ARR[i]=='-')
        {
            sign = -1 ;
        }
        if(ARR[i]>='0' && ARR[i]<='9')
        {
            temp = (ARR[i]-'0') + (temp*10);
            found_digit = 1; 
        }
        else if (found_digit)
        {
            break;
        }
    }
    return sign*temp;
}
int main ()
{
    //Print the numbers

    int test ;
    char ARR[] = "--123 Hamody";
    test = my_atoi(ARR);
    printf("%d\n",test);

    // Files Handler 

    FILE *ptr = fopen("converted_numbers.txt", "w");
    if (ptr == NULL) {
        printf("Error\n");
        return -1;
    }
    for(int i = 0 ; ARR[i]!='\0';i++)
    {
        my_putchar(ptr, ARR[i]);
    }
    fclose(ptr);
    
    return 0 ;
}
