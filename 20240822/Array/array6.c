//6. Write a C program to sort given list of numbers in descending order.
#include<stdio.h>
int main()
{
    int a[10], i, n, j, t;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    printf("Enter the Array Elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array before Sorting: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    for(i = 0; i < n-1; i++) 
    { 
        for(j = i + 1; j < n; j++) 
        { 
            if(a[i] < a[j]) 
            { 
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("\n After Sorting: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}