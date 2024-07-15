//5.Write a program in C to display a pattern like a diamond.
//5.Write a program in C to display a pattern like a diamond.
#include <stdio.h>
int main() 
{
    int i, j = 0, r;
    printf("Input number of rows (half of the diamond) :");
    scanf("%d", &r);
    i = 0;
    while (i <= r)
    {
        for(j = 0; j < r - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
        i++;
    }
    i = r - 1;
    while (i >= 1)
    {
        for(j = 0; j < r - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
        i--;
    }
    return 0;
} 