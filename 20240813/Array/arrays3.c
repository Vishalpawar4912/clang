//3. Write a C program to print all unique elements in the array.
#include<stdio.h>
int main() 
{
    int arr[100], n, i, j, cnt;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        cnt = 0;
        for(j = 0; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                cnt++;
            }
        }
        if(cnt == 1) 
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}