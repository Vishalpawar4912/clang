//20. Transpose of a Matrix.
#include<stdio.h>
int main()
{
    int m1[10][10], trans[10][10], i, j, r, c;
    printf("How many rows and columns in the matrix: \n");
    scanf("%d %d", &r, &c);
    printf("Enter the Elements: \n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            scanf("%d", &m1[i][j]);
            trans[j][i] = m1[i][j];
        }
        printf("\nThe Transpose is: \n");
        for(i = 0; i < c; i++)
        {
            for(j = 0; j < r; j++)
            printf("%5d", trans[i][j]);
            printf("\n");
        }
}