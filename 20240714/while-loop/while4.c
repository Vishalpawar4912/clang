//4. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
#include <stdio.h>  
int main() 
{
    int i = 1, j, rows;  
    printf("Input number of rows : ");  
    scanf("%d", &rows);  
    while (i <= rows)
    {
        for (j = 1; j <= i; j++)  
            printf("%d", i);  
        printf("\n"); 
        i++;
    }
    return 0;
}
