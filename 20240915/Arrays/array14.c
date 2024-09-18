//14. Write a C program to copy all elements from an array to another array.
#include<stdio.h>
#define MAX 100
int main()
{
    int src[MAX], dest[MAX];
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter Elements of Source Array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &src[i]);
    }
    for(i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
    printf("Elements of source array are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", dest[i]);
    }
    return 0;
}