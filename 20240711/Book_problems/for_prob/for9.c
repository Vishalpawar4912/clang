// 9. TO Display the Pattern. 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include<stdio.h>
int main()
{
    int row, i, j;
    printf("Enter the Number of Rows in thr Pattern :");
    scanf("%d", &row);
    for(i = row; i > 0; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%3d", j);
        }
        printf("\n");
    }
    return 0;
}