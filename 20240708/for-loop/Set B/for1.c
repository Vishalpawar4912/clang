// 1. Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……) 
#include<stdio.h>
int main()
{
    int n, f1 = 0, f2 = 1, f3, i;
    printf("Enter the Number of Terms to print :");
    scanf("%d", &n);
    printf("First %d Terms of Fibonacci series are :\n", n);
    for(i = 1; i <= n; i++)
    {
        if(i <= 1)
            f3 = i;
        else
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("%d\n", f3);
    }
    return 0;
}
