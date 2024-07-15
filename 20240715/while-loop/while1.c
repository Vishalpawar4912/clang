//Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.
//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include<stdio.h>
int main() 
{
    int i = 1, j = 1, row;
    printf("Enter the Number of Rows :");
    scanf("%d", &row);
    while (i <= row)
    {
        for(j = 1; j <= row - i; j++) 
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", i);
        }
        printf("\n");
        i++;       
    }
    return 0;
}