//1. Write a C program to find cube of any number using function.
#include<stdio.h>
int cube(int n)
{
    return n * n * n; 
}
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    printf("Cube of %d is %d", num, cube(num));
    return 0;
}