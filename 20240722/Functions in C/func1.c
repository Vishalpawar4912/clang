//1. Write a program in C to find the square of any number using the function.
#include <stdio.h>
double square(double num)
{
    return (num * num);
}
int main()
{
    int num;
    double n;
    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}