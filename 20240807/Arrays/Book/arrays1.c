//1. Accept n Numbers, Store them in an array and display only the even numbers.
#include<stdio.h>
int main()
{
    int i, n, num[50];
    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
    scanf("%d", &num[i]);
    printf("\n The Even Numbers are:\n");
    for(i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0)
        printf("%3d", num[i]);
    }
}