//2.Write a C program that generates the first n Fibonacci numbers using a for loop. The value of n should be taken as input from the user.
#include<stdio.h>
int main()
{
    int f1 = 0, f2 = 1, f3, n, i;
    printf("Enter the number of terms to print :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
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
    }
}