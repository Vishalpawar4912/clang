//1. Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the first n Fibonacci numbers. 
// The recursive definition of nth Fibonacci number is as follows:
// fib(n) = 1                         if n = 1 or 2          
//        = fib(n-2) + fib(n-1  )     if n>2
#include<stdio.h>
int fibo(int num) 
{
    if(num == 1 || num == 2) 
    {
        return 1;
    } 
    else 
    {
        return(fibo(num - 2) + fibo(num - 1));
    }
}
int main()
{
    int num, result;
    printf("Enter the nth Number of Fibonacci Series :");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Fibonacci of Negative Number is not Possible.\n");
    }
    else
    {
        result = fibo(num);
        printf("The %d Number in Fibonacci Series is %d\n", num, result);
    }
    return 0;
}