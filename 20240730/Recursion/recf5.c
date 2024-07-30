//5. Write a C program to display all array elements using recursion.
#include<stdio.h>
void displayArray(int arr[], int size, int index) 
{
    if(index == size)
        return;
    else 
    {
        printf("%d ", arr[index]);
        displayArray(arr, size, index + 1);
    }
}
int main() 
{
    int size;
    printf("Enter the number of array elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    displayArray(arr, size, 0);
    return 0;
}
