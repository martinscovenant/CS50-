#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's x? ");
    printf("You entered: %d\n", x);

    int y = get_int("what's y? ");
    printf("You entered: %d\n", y);

    if (x < y) 
    {
        printf("x is less than y\n");
    }
}
