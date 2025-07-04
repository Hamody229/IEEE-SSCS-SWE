
#include <stdio.h>
#include <string.h> 

int main(int argc, char *argv[])
{
    int found_revelation = 0;

    if (argc == 1)
    {
        printf("Silence. Nothing came through.\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);

        if (!found_revelation && strcmp(argv[i], "revelation") == 0)
        {
            found_revelation = 1;
        }
    }

    if (found_revelation)
    {
        printf("A truth revealed: You are not alone.\n");
    }

    return 0;
}
