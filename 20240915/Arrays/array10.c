//10. Write a C program to find sum of all array elements. – using recursion.
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, n, sum = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);
    return 0;
}