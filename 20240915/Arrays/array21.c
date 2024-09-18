//21. To multiply two matrices and display the product (using functions).
#include<stdio.h>
void readmat(int x[10][10], int r, int c)
{
    int i, j;
    for(i = 0; i < r; i++)
    for(j = 0; j < c; j++)
    scanf("%d", &x[i][j]);
}
int verify(int x, int y)
{
    return (x == y);
}
void dispmat(int m[10][10], int r, int c)
{
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }
}
void multmat(int x[10][10], int y[10][10], int z[10][10], int r1, int c1, int c2)
{
    int i, j, k;
    for(i = 0; i< r1; i++)
    for(j = 0; j < c2; j++)
    {
        z[i][j] = 0;
        for(k = 0; k < c1; k++)
        z[i][j] = z[i][j] + x[i][k] * y[k][j];
    }
}
int main()
{
    int verify( int, int);
    int a[10][10], b[10][10], c[10][10], r1, r2, c1, c2;
    printf("Number of rows and columns in Matrix A:\n");
    scanf("%d %d", &r1, &c1);
    printf("Number of rows and columns in Matrix B:\n");
    scanf("%d %d", &r2, &c2);
    if(verify(c1, r2) == 1)
    {
        printf("\nMultiplication is Possible.\n");
        printf("\nInput Matrix A: \n");
        readmat(a, r1, c1);
        printf("Input Matrix B: \n");
        readmat(b, r2, c2);
        multmat(a, b, c, r1, c1, c2);
        printf("\n The Resultant Matrix is: \n");
        dispmat(c, r1, c2);
    }
    else
    {
        printf("Columns of A must equal to rows in B.\n");
        printf("\n Multiplication is not Possible.");
    }
}