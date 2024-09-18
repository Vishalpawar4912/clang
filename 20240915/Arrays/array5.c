//5. Sorting Elements of an array using bubble sort.
#include<stdio.h>
int main()
{
    int num[50], i, n, temp, j;
    printf("How many Numbers: ");
    scanf("%d", &n);
    // accept elements
    printf("Enter the Elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    // sort //
    for(i = 1; i <= n-1; i++)  // llop for n-1 passes
    {
        for(j = 0; j < n- i; j++)  // loop for comparing
        {
            if(num [j] > num[j + 1])  // interchanging
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    // displaying sorted array
    printf("The Sorted Elements are: ");
    for(i = 0; i < n; i++)
        printf("%d\t", num[i]);
}