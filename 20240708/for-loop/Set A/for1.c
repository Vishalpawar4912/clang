// 1. Write a program to accept an integer n and display all even numbers upto n. 
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}