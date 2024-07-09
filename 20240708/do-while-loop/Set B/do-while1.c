// 1. Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……) 
#include<stdio.h>
int main()
{
    int n, f1 = 0, f2 = 1, f3, i = 1;
    printf("Enter the Number of terms to print :");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series are :\n", n);
    do
    {
        if(i <= 1)
        {
            f3 = i;
        }
        else
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("%d\n", f3);
        i++;
    } while (i <= n);
    return 0;
}