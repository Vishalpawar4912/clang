//1. Write a C program to print all natural numbers between 1 to n using recursion.
#include<stdio.h>
int main()
{
    int lower, upper;
    printf("Enter the Lower Limit: ");
    scanf("%d", &lower);
    printf("Enter the Upper Limit: ");
    scanf("%d", &upper);
    printf("All Natural NUmber from %d to %d are : ", lower, upper);
    Naturalnumber(lower, upper);
    return 0;
}
void Naturalnumber(int lower, int upper)
{
    if(lower > upper)
        return;
    printf("%d, ", lower);
    Naturalnumber(lower + 1, upper);
}