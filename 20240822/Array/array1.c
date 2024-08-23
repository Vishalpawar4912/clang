//1. Addition of Two Matrices.
#include<stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], r1, c1, r2, c2, i, j;
    printf("How many rows and columns in matrix1: \n");
    scanf("%d %d", &r1, &c1);
    printf("How many rows and columns in matrix2: \n");
    scanf("%d %d", &r2, &c2);
    if((r1 == r2) && (c1 == c2))
    {
        printf("\nAddition Possible.\n");
        printf("Input Matrix1: \n");
        for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
        scanf("%d", &mat1[i][j]);
        printf("\nInput Matrix2: \n");
        for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
        printf("\nThe Sum is: \n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            printf("%5d", mat3[i][j]);
            printf("\n");
        }
    }
    else
        printf("\n Addition Not Possible.\n");
}