//1. Write a C program to read and print elements of array. – using recursion.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    printf("Enter %d Elements in the Arraay:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in Array are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}