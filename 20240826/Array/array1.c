//1. Write a program to accept, display and print the sum of elements of each row of a matrix.
#include<stdio.h>
int main()
{
    int mat[10][10], m, n;
    void display(int a[10][10], int m, int n);
    void accept(int a[10][10], int m, int n);
    void sumofrows(int a[10][10], int m, int n);
    printf("How many rows and columns: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the Matrix Elements: \n");
    accept(mat, m, n);
    printf("\n The Matrix is: \n");
    display(mat, m, n);
    sumofrows(mat, m, n);
}
void accept(int a[10][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void display(int a[10][10], int m, int n)
{
    int i, j;
    printf("\nThe Elements of %d by %d Matrix are: \n", m, n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
void sumofrows(int a[10][10], int m, int n)
{
    int i, j, sum;
    for(i = 0; i < m; i++)
    {
        sum = 0;
        for(j = 0; j < n; j++)
            sum = sum + a[i][j];
        printf("Sum of Elements of row %d = %d\n", i, sum);
    }
}