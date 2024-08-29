//2. Write a program to accept a matrix A of size m X n and store its transpose in matrix B. display matrix B write separate functions.
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, i, j;
    printf("Enter the Number of Row and Columns: \n");
    scanf("%d %d", &m, &n);
    acceptMat(a, m, m);
    storeTrans(a, b, m, n);
    displayMat(b, n, m);
    return 0;
}
void acceptMat(int a[10][10], int m, int n)
{
    int i, j;
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void displayMat(int b[10][10], int n, int m) 
{
    int i, j;
    printf("Transpose of matrix A (matrix B):\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < m; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
void storeTrans(int a[10][10], int b[10][10], int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
}