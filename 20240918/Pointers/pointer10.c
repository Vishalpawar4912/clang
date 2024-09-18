// Using realloc() to change memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n, n1, i;
    printf("How many Numbers: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the Numbers: \n");
    for(i = 0; i < n; i++)
        scanf("%d", ptr + i);
    printf("How many New Numbers: ");
    scanf("%d", &n1);
    ptr = (int *)realloc(ptr, (n + n1) * sizeof(int));
    if(ptr == NULL)
        exit(1);
    printf("Enter the Remaining Numbers: \n");
    for(i = n; i < (n + n1); i++)
        scanf("%d", ptr + i);
    printf("The Entire List is : \n");
    for(i = 0; i < (n + n1); i++)
        printf("%d\t", *(ptr + i));
    return 0;
}