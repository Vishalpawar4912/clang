//4.Write a C program to find the 'Perfect' numbers within a given number of ranges.
#include<stdio.h>
int main() 
{
    int n, sum, i;
    int max, min;
    printf("Enter the Starting Range of Number :");
    scanf("%d", &min);
    printf("Enter the Ending Range of Number :");
    scanf("%d", &max);
    printf("The Perfect numbers within the given range : ");
    n = min;
    do
    {
        sum = 0; 
        i = 1;
        while (i < n) 
        {
            if(n % i == 0) 
            {
                sum = sum + i;
            }
            i++;
        }
        if(sum == n) 
        {
            printf("%d ", n); 
        }
        n++;
    } while (n <= max);
    printf("\n");
    return 0;
}
