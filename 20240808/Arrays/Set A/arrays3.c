//3. Write a function, which accepts an integer array and an integer as parameters and counts the occurences of the number in the array.
// Example: Input  1  5  2  1  6  3  8  2  9  15  1  30
//          Number :  1
// Output: 1 occurs 3 times
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Numbers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the number to count:");
    scanf("%d", &num);
    int occur = countOccur(arr, n, num);
    printf("%d Occur %d Times", num, occur);
    return 0;
}
int countOccur(int arr[], int n, int num)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            cnt++;
        }
    }
    return cnt;
}