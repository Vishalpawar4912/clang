//5.Write a program in C to display a pattern like a diamond.
#include <stdio.h>
int main() 
{
    int i, j, r;
    printf("Input number of rows (half of the diamond) :");
    scanf("%d", &r);
    for(i = 0; i <= r; i++) 
    {
        for(j = 0; j < r - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for(i = r - 1; i >= 1; i--) 
    {
        for(j = 0; j < r - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
