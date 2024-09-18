//15. Write a C program to count total number of duplicate elements in an array.
#include<stdio.h>
int main() 
{
    int arr[100], n, i, j, cnt, dupCnt = 0;
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
        if(cnt > 1) 
        {
            dupCnt += cnt - 1;
        }
    }
    printf("Total number of duplicate elements: %d\n", dupCnt);
    return 0;
}