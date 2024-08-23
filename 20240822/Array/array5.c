//5. Write a C program to store 2 set of integers as an array and find intersection of two sets.
#include<stdio.h>
int main() 
{
    int arr1[10], arr2[10], i, j, temp;
    printf("Enter number of elements in first array (max 10): \n");
    int n1;
    scanf("%d", &n1);
    printf("Enter elements of first array: \n");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array (max 10): \n");
    int n2;
    scanf("%d", &n2);
    printf("Enter elements of second array: \n");
    for(j = 0; j < n2; j++) 
    {
        scanf("%d", &arr2[j]);
    }
    for(i = 0; i < n1; i++) 
    {
        for(j = 0; j < n1 - 1; j++) 
        {
            if(arr1[j] > arr1[j + 1]) 
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < n2; i++) 
    {
        for(j = 0; j < n2 - 1; j++) 
        {
            if(arr2[j] > arr2[j + 1]) 
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    printf("\nIntersection is: \n");
    i = j = 0;
    while(i < n1 && j < n2) 
    {
        if(arr1[i] == arr2[j]) 
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        } 
        else if(arr1[i] < arr2[j]) 
        {
            i++;
        } 
        else 
        {
            j++;
        }
    }
    return 0;
}