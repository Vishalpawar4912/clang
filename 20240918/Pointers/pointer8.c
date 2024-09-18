// Illustrate dynamic allocation and de-allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n, i, sum = 0;
    printf("How many Elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory was not Allocated");
        exit(0);
    }
    printf("Enter the Elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum = sum + *(ptr + i);
    }
    printf("You Entered : \n");
    for(i = 0; i < n; i++)
        printf("%d\t", ptr[i]);
    printf("\nThe Sum : %d", sum);
    free(ptr);
    return 0;
}