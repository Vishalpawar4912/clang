//3. A train station A at 4.00 a.m. and travels at 80kmph. After every 30 minutes, it reaches a station where it halts for 10 minutes. 
//it reaches its final destination B at 1.00 p.m.. Display a table showing its arrival and departure time at every intermediate station. 
//also calculate the total distance between A and B.
#include<stdio.h>
int main()
{
    int time = 4.00 * 60;
    int distance = 0;
    int station = 0;
    for(; time < 13 * 60; )
    {
        printf("Station %d:\n", station + 1);
        printf("Arrival : %d:%d\n", time / 60, time % 60);
        time = time + 30;
        printf("Departure :%d:%d\n",time / 60, time % 60);
        time = time + 10;
        distance = distance + 40;
        station++;
    }
    printf("Total Distance is : %d km\n",distance);
    return 0;
}
