//1. Write a function to sort an array of n integers using Bubble sort method.
// Accept n numbers from the user, store them in an array and sort them  using this function. Display the sorted array.
#include<stdio.h>
// Function to sort an array using Bubble sort
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}