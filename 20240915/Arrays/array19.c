//19. To accept a m x n matrix and generate a m + 1 x n + 1 matrix such that the mth row contains sum of elements of corresponding columns and 
//    the nth column contains sum of elements of corresponding rows.
//    Example. 
//              Input                     Output
//            1   2   3              1    2    3    6
//            4   5   6              4    5    6   15
//            7   8   9              7    8    9   24
//                                  12   15   18   45
#include<stdio.h>
int main()
{
    int a[10][10], i, j, m, n, sum;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of matrix:\n");
    for(i = 0; i < m; i++) 
    {
        sum = 0;
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
        a[i][n] = sum; 
    }
    for(j = 0; j < n; j++) 
    { 
        sum = 0;
        for(i = 0; i < m; i++)
            sum = sum + a[i][j];
        a[m][j] = sum;
    }
    a[m][n] = 0; 
    for(i = 0; i < m; i++)
        a[m][n] += a[i][n];
    printf("The Resultant Matrix is: \n");
    for(i = 0; i <= m; i++) 
    {
        for(j = 0; j <= n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    return 0;
}