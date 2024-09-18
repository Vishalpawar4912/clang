// Illustrate array of pointers and dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *row[10];
    int r, c, i, j;
    printf("How many Rows and Columns: \n");
    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++)
    {
        row[i] = (int *)malloc(c * sizeof(int));
        for(j = 0; j < c; j++)
        {
            printf("Enter the %d %d Elelments : \n", i, j);
            scanf("%d", row[i] + j);
        }
    }
    printf("The Matrix is : \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d\t", *(row[i] + j));
            printf("\n");
    }
    return 0;
}