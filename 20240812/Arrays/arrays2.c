//2. Write a C program to count total number of negative elements in an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, size, cnt = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array :\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            cnt++;
        }
    }
    printf("Total Negative ELemenys in array : %d", cnt);
    return 0;
}