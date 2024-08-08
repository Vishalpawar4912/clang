//2. Write a function for linear search, which accepts an array of n elements and a key as parameters and 
// returns the position of key in the array and -1 if the key is not found.
// Accept n numbers from the user, store them in an array.
// Accept the key to be searched and search it using this function. Display appropriate message.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Numbers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    int result = linearsearch(arr, n, key);
    if(result == -1)
    {
        printf("Key not found in the Array");
    }
    else
    {
        printf("Key found at position %d", result);
    }
    return 0;
}
int linearsearch(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i + 1;
        }
    }
    return -1;
}