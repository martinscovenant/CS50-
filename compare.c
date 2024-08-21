#include <stdio.h>

int main(void)
{
    int x, y;
    printf("what's x? ");
    scanf("%d", &x);

    printf("what's y? ");
    scanf("%d", &y);

    if (x < y) 
    {
        printf("x is less than y\n");
    }
}
