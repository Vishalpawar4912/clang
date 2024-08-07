//1. Accept n Numbers, Store them in an array and display only the even numbers.
#include<stdio.h>
int main()
{
    int i, n, num[50];
    printf("How many numbers: ");
    scanf("%d", &n);
    // accept array elements
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
    scanf("%d", &num[i]);
    // displaying only the even numbers
    printf("\n The Even Numbers are:\n");
    for(i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0)
        printf("%3d", num[i]);
    }
}