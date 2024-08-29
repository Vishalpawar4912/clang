//4. Write a menu driven program to perform the following operatins on square matrix.
//   write a seperate functions for each option.
//   1. Check if the matrix is symmetric.
//   2. Display the trace of matrix(Sum of diagonal elements).
//   3. Check if the matrix is an upper triangular matrix.
//   4. Check if the matrix is a lower triangular matrix.
//   5. Check if it is an identity matrix.
#include<stdio.h>
int main()
{
    int A[10][10], n, choice;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);
    acceptMat(A, n);
    printf("Matrix:\n");
    displayMat(A, n);
    while(1) 
    {
        printf("\nMenu:\n");
        printf("1. Check if matrix is symmetric\n");
        printf("2. Display trace of matrix\n");
        printf("3. Check if matrix is upper triangular\n");
        printf("4. Check if matrix is lower triangular\n");
        printf("5. Check if matrix is identity\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                if(isSymmetric(A, n)) 
                {
                    printf("Matrix is symmetric.\n");
                } 
                else 
                {
                    printf("Matrix is not symmetric.\n");
                }
                break;
            case 2:
                displayTrace(A, n);
                break;
            case 3:
                if(isUpperTriangular(A, n)) 
                {
                    printf("Matrix is upper triangular.\n");
                } 
                else 
                {
                    printf("Matrix is not upper triangular.\n");
                }
                break;
            case 4:
                if(isLowerTriangular(A, n)) 
                {
                    printf("Matrix is lower triangular.\n");
                } 
                else 
                {
                    printf("Matrix is not lower triangular.\n");
                }
                break;
            case 5:
                if(isIdentity(A, n)) 
                {
                    printf("Matrix is identity.\n");
                } 
                else 
                {
                    printf("Matrix is not identity.\n");
                }
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
void acceptMat(int A[10][10], int n) 
{
    int i, j;
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void displayMat(int A[10][10], int n) 
{
    int i, j;
    printf("Matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int isSymmetric(int A[10][10], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(A[i][j] != A[j][i]) 
            {
                return 0;
            }
        }
    }
    return 1;
}
void displayTrace(int A[10][10], int n) 
{
    int i, trace = 0;
    for(i = 0; i < n; i++) 
    {
        trace += A[i][i];
    }
    printf("\nTrace of matrix: %d\n", trace);
}
int isUpperTriangular(int A[10][10], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < i; j++) 
        {
            if(A[i][j] != 0) 
            {
                return 0;
            }
        }
    }
    return 1;
}
int isLowerTriangular(int A[10][10], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(A[i][j] != 0) 
            {
                return 0;
            }
        }
    }
    return 1;
}
int isIdentity(int A[10][10], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(i == j && A[i][j] != 1) 
            {
                return 0;
            }
            if(i != j && A[i][j] != 0) 
            {
                return 0;
            }
        }
    }
    return 1;
}