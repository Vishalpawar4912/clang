// Write a C program to sort 'n' array elements in ascending order using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int swapNumber(int *, int *);
int main() 
{
    int i, j, n;
    int *nNumArray;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    nNumArray = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) 
    {
        printf("Enter the Number %d : ", i + 1);
        scanf("%d", nNumArray + i);
    }
    printf("Before Sorting : \n");
    for(i = 0; i < n; i++)
        printf("%d ", nNumArray[i]);
    printf("\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(*(nNumArray + j) > *(nNumArray + (j + 1))) 
            {
                swapNumber(nNumArray + j, nNumArray + (j + 1));
            }
        }
    }
    printf("After Sorting : \n");
    for(i = 0; i < n; i++)
        printf("%d ", nNumArray[i]);
    printf("\n");
    free(nNumArray);
    return 0;
}
int swapNumber(int *npFirst, int *npSecond) 
{
    int temp;
    temp = *npFirst;
    *npFirst = *npSecond;
    *npSecond = temp; 
    return 0;
}