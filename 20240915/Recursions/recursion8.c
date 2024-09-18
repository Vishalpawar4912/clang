//8. Write a C program to find factorial of any number using recursion.
#include<stdio.h>
long factorial(int num) 
{
    if(num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}
int main() 
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if(num < 0)
        printf("Factorial of Negative Numbers is not possible.");
    else
        printf("Factorial of %d : %ld", num, factorial(num));
    return 0;
}