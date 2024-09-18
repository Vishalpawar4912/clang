//9. Write a C program to print all negative elements in an array.
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("All negative elements in array are: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}