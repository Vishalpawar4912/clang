//4. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
#include <stdio.h>  
int main() 
{
    int i, j, rows;  
    printf("Input number of rows : ");  
    scanf("%d", &rows);  
    for (i = 1; i <= rows; i++) 
    {  
        for (j = 1; j <= i; j++)  
            printf("%d", i);  
        printf("\n");  
    }
    return 0;
}
