// 4. Write a program to merge two sorted arrays into a third array such that the third array is also in the sorted order.
// Example: 
// a1  10  25  90
// a2   9  16  22  26  100
// a3   9  10  16  22  25  26  90  100
#include<stdio.h>
int main()
{
    int m, n, i, j, k, a1[20], a2[20], a3[40];
    printf("Enter the length of the first array: ");
    scanf("%d", &m);
    // Accept elements of the first array
    printf("Enter elements in the sorted order:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &a1[i]);
    printf("Enter the length of the second array : ");
    scanf("%d", &n);
    // Accept elements of the first array
    printf("Enter elements in the sorted order:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a2[i]);
    // merging into the third array as long as both arrays do not end
    i = 0; j = 0; k = 0;    // initializing
    while((i < m) && (j < n))
    {
        if(a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
    // if array1 has not ended, copy its elements
    while(i < m)
        a3[k++] = a1[i++];
    // if array2 has not ended, copy its elements
    while(j < n)
        a3[k++] = a2[j++];
    // display merged array
    printf("The merged array is: \n");
    for(i = 0; i < k; i++)
        printf("%d\t", a3[i]);
}