#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    while (1)
    {
        time_t now;
        time(&now);
        struct tm *local = localtime(&now);

        int hours = local->tm_hour;
        int minutes = local->tm_min;
        int seconds = local->tm_sec;

        char *ampm = hours >= 12 ? "PM" : "AM";
        if (hours == 0)
            hours = 12; 
        else if (hours > 12)
            hours -= 12;  

        printf("\033[H\033[J");
        printf("\033[1;32m");
        printf("Current Time: %02d:%02d:%02d %s\n", hours, minutes, seconds, ampm);
        printf("\033[0m");
        
        sleep(1);
    }

    return 0;
}
