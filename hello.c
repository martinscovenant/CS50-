#include <stdio.h>

int main(void)
{
    char answer[100];  // Declare a character array to hold the string
    printf("what's your name? ");
    scanf("%99s", answer);  // Read the input string
    printf("hello, %s\n", answer);
}
