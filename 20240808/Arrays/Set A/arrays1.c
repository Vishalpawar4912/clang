//1. Write a Program to accept n numbers and display the array in the reverse order. Write seperate functions to accept and display.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    acceptArray(arr, n);
    displayReverse(arr, n);
    return 0;
}
void acceptArray(int arr[], int n)
{
    int i;
    printf("Enter %d Numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void displayReverse(int arr[], int n)
{
    int i;
    printf("Array in Reverse Order: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}