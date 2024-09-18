//3. Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int main()
{
    int start, end, sum;
    printf("Enter the Lower Limit: ");
    scanf("%d", &start);
    printf("Enter the Upper Limit: ");
    scanf("%d", &end);
    sum = SumofNatNum(start, end);
    printf("Sum of Natural Numbers from %d to %d = %d", start, end, sum);
    return 0;
}
int SumofNatNum(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + SumofNatNum(start + 1, end);
}