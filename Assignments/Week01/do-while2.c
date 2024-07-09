//2.Write a C program that prints the multiplication table of a given number using a do-while loop. The table should display products from 1 to 10.
#include<stdio.h>
int main()
{
    int n, i = 1, mul;
    printf("Enter the Number want to print the Table :");
    scanf("%d", &n);
    printf("Multiplication Table from 1 to %d :\n", n);
    do
    {
        for(int j=1; j <= n; j++) {
            mul = i * j;
            printf("%2d * %2d = %2d |", j, i, mul);
        }
        printf("\n");
        i++;
    } while (i <= 10);
    
}