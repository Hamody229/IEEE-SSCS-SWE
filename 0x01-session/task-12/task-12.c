#include <stdio.h>
#include <unistd.h> 
#include <string.h> 

void printer(int n, char *str)
{   

    write(n, str, strlen(str));
}

int main()
{
    FILE * fd = NULL ;
    fd = fopen("hamody.txt","w");

    fprintf(fd,"Hamody\n");
    
    printer(fileno(fd), "Hamody2\n");
    fclose(fd);

    printer(1,"Hamody3");
    return 0;

}