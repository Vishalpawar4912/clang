// 1. Write a program to accept an integer n and display all even numbers upto n.
#include<stdio.h>
int main()
{
    int n, i = 1;
    printf("\nEnter the Number :");
    scanf("%d", &n);
    n++;
    while(n != i)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}