//4. A task 4 1/2 hours to complete. Two workers A and B start working on it and take turns alternately. 
//A works for 25 minutes at a time and is paid Rs. 50, B works for 75 minutes at a time and is paid Rs. 150. 
//Display the total number of turns taken by A and B, calculate their total amounts and also the total cost of the task.
#include<stdio.h>
int main()
{
    int time = 4 * 60 + 30;
    int turnA = 0, turnB = 0;
    int amtA = 0, amtB = 0;
    while (time > 0)
    {
        time = time - 25;
        turnA++;
        amtA = amtA + 50;

        time = time - 75;
        turnB++;
        amtB = amtB + 150;
    }
    printf("Total turns by A: %d\n", turnA);
    printf("Total turns by B: %d\n", turnB);
    printf("Total amount of A: Rs. %d\n", amtA);
    printf("Total amount of B: Rs. %d\n", amtB);
    printf("Total cost of the task: Rs. %d\n", amtA + amtB);    
}