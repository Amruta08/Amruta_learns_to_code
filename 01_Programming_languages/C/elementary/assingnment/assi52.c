#include<stdio.h>

struct time
{
    int h;
    int min;
    int sec;
}s1, s2, d;

int main()
{
    /* Reading first time period */
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &s1.h,&s1.min, &s1.sec);

    /* Reading second time period */
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &s2.h,&s2.min, &s2.sec);

    if(s1.sec > s2.sec)
    {
        s2.sec += 60;
        --s2.min;
    }

    if(s1.min > s2.min)
    {
        s2.min += 60;
        --s2.h;
    }

    d.sec = s2.sec - s1.sec;
    d.min = s2.min - s1.min;
    d.h = s2.h - s1.h;

    printf("Difference = %d : %d : %d", d.h, d.min, d.sec);
    return 0;
}