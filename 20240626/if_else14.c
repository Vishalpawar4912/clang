// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("\n Enter the Angles of Triangle :");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("\n Triangle is valid as per the Angles");
    }
    else{
        printf("\n Triangle is not valid as per the Angles");
    }
}