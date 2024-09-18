//20. Write a C program to print all perfect numbers between given interval using functions.
#include<stdio.h>
void findPerfectNumbers(int start, int end) 
{
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
    {
        int sum = 0;
        for (int j = 1; j < i; j++) 
        {
            if (i % j == 0) sum += j;
        }
        if (sum == i) printf("%d\t", i);
    }
}
int main() 
{
    int start, end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);
    findPerfectNumbers(start, end);
    return 0;
}