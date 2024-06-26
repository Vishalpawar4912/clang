// Write a C program to find maximum between two numbers.
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("\n Enter Two Numbers : ");
    scanf("%d%d", &n1, &n2);
    if(n1 > n2)
    printf("\n %d is maximum number", n1);
    else
    printf("\n %d is maximum number", n2);
}