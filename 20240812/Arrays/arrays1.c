//1. Write a C program to count total number of even and odd elements in an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, size, even, odd;
    printf("Enter size of the Array: ");
    scanf("%d", &size);
    printf("Enter %d elements in array:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total Even Elements: %d\n", even);
    printf("Total Odd Elements: %d", odd);
    return 0;
}