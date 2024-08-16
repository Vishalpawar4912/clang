//5. Write a C program to sort even and odd elements of array separately.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int even[MAX], odd[MAX];
    int eCnt = 0, oCnt = 0;
    int size, temp, i, j;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            even[eCnt++] = arr[i];
        }
        else
        {
            odd[oCnt++] = arr[i];
        }
    }
    for(i = 0; i < eCnt; i++)
    {
        for(j = i + 1; j < eCnt; j++)
        {
            if(even[i] > even[j])
            {
                temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }
    for(i = 0; i < eCnt; i++)
    {
        for(j = i + 1; j < eCnt; j++)
        {
            if(even[i] > even[j])
            {
                temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }
    printf("Even elements in Ascending order: ");
    for(i = 0; i < eCnt; i++) 
    {
        printf("%d\t", even[i]);
    }
    printf("\n");
    printf("Odd elements in Ascending order: ");
    for(i = 0; i < oCnt; i++) 
    {
        printf("%d\t", odd[i]);
    }
    printf("\n");
    return 0;
}