#include <stdio.h>

int main(void)
{
    // Prompt user for input
    printf("Do you agree? ");
    char c = getchar();

    // Check the character
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}./agre
