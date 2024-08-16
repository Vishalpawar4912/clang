//2. Write a C program to put even and odd elements of array in two separate array.
#include<stdio.h>
int main() 
{
    int arr[100], n, i, even[100], odd[100], eCount = 0, oCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        if(arr[i] % 2 == 0) 
        {
            even[eCount++] = arr[i];
        } 
        else 
        {
            odd[oCount++] = arr[i];
        }
    }
    printf("Even elements: ");
    for(i = 0; i < eCount; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd elements: ");
    for(i = 0; i < oCount; i++) 
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}