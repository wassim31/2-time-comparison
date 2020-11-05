#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second, hour1, minute1, second1;
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
    if(hour > hour1)
    {
        printf("The first time is : %02d : %02d : %02d \n", hour1, minute1, second1);
    }
    else if(hour1 > hour)
    {
        printf("The first1 time is : %02d : %02d : %02d \n", hour, minute, second);
    }
   else 
   {
		printf("the same hours , let's move to minutes\n");
        if(minute > minute1)
        {
            printf("The first time is : %02d : %02d : %02d \n", hour1, minute1, second1);

        }
        else if(minute1 > minute)
        {
            printf("The first time is : %02d : %02d : %02d \n", hour, minute, second);

        }
		else 
        {
        	printf("the same minutes , let's move to seconds\n");
        	if(second > second1)
        	{
            	printf("The first time is : %02d : %02d : %02d \n", hour1, minute1, second1);
          	}
            else if(second1 > second)
          	{
              	printf("The first time is : %02d : %02d : %02d \n", hour, minute, second);
          	}
         	else 
          	{
              	printf("it's the same time : %02d : %02d : %02d \n", hour1, minute1, second1);
          	} 
        }
   }
   return 0;
}

