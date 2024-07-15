//Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.
//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include<stdio.h>
int main() 
{
    int i, j, row;
    printf("Enter the Number of Rows :");
    scanf("%d", &row);
    for(i = 1; i <= row; i++) 
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
    }
    return 0;
}