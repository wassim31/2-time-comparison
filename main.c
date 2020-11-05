#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second, hour1, minute1, second1;
    int dif;
    printf("Enter the first time\n");
    do
    {
        scanf( "%i %i %i", &hour, &minute, &second);

    } while(hour > 24 || minute > 60 || second > 60);
    if(hour == 24)
    {
        hour = 00;
    }
    if(minute == 60)
    {
        minute = 00;
        hour++;
    }
    else if(second == 60)
    {
        second = 00;
        minute++;
    }
    printf("(first-time) it's %02d : %02d : %02d \n", hour, minute, second);

    printf("Enter the second time\n\n");
    do
    {
        scanf( "%i %i %i", &hour1, &minute1, &second1);

    } while(hour1 > 24 || minute1 > 60 || second1 > 60);
    if(hour1 == 24)
    {
        hour1 =  00;
    }
    if(minute1 == 60)
    {
        minute1 = 00;
        hour1++;
    }
    else if(second1 == 60)
    {
        second1 = 00;
        minute1++;
    }
    printf("(second-time) it's %02d : %02d : %02d \n\n", hour1, minute1, second1);
    def = (3600 * hour) + (60 * minute) + (second) - (3600 * hour1) + (60 * minute1) + (second1)

    if(def > 0)
    {
        printf("The first time is : %02d : %02d : %02d \n", hour1, minute1, second1);
    }
    else if(def < 0)
    {
        printf("The first time is : %02d : %02d : %02d \n", hour, minute, second);
    }
    else
    {
        printf("The same time : %02d : %02d : %02d \n", hour1, minute1, second1);
    }
    return 0;
}

