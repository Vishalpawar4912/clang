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
    i = row;
    while (i > 0)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%3d", j);
        }
        printf("\n");
        i--;
    }
    return 0;
}
