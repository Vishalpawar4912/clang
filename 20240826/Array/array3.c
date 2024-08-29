//3. Write a program to add and multiply two matrices. Write a seperate functions to accept, display, add and multiply the matrices. 
//   perform necessary checks before adding and mulitplying the matrices.
#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], m, n, p, i, j;
    printf("Enter number of rows for matrix A (m): ");
    scanf("%d", &m);
    printf("Enter number of columns for matrix A (n): ");
    scanf("%d", &n);
    printf("Enter number of columns for matrix B (p): ");
    scanf("%d", &p);
    if(n != p) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    acceptMat(A, m, n);
    acceptMat(B, n, p);
    printf("Matrix A:\n");
    displayMat(A, m, n);
    printf("Matrix B:\n");
    displayMat(B, n, p);
    addMat(A, B, C, m, n);
    printf("Sum of matrices A and B:\n");
    displayMat(C, m, n);
    multiplyMat(A, B, C, m, n, p);
    printf("Product of matrices A and B:\n");
    displayMat(C, m, p);
    return 0;
}
void acceptMat(int A[10][10], int m, int n) 
{
    int i, j;
    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void displayMat(int A[10][10], int m, int n) 
{
    int i, j;
    printf("Matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
void addMat(int A[10][10], int B[10][10], int C[10][10], int m, int n) 
{
    int i, j;
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void multiplyMat(int A[10][10], int B[10][10], int C[10][10], int m, int n, int p) 
{
    int i, j, k;
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < p; j++) 
        {
            C[i][j] = 0;
            for(k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}