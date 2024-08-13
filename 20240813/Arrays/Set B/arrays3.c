//3. Write a program to find the intersection of the two sets of integers. Store the intersection in another array.
#include<stdio.h>
int Intersection(int set1[], int set2[], int m, int n, int intersection[], int *size) 
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n) 
    {
        if (set1[i] < set2[j]) 
        {
            i++;
        } 
        else if (set2[j] < set1[i]) 
        {
            j++;
        } 
        else 
        {
            intersection[k++] = set1[i];
            i++;
            j++;
        }
    }
    *size = k; 
}
int main()
{
    int m, n;
    printf("Enter the number of elements in set 1: ");
    scanf("%d", &m);
    int set1[m];
    printf("Enter elements of set 1:\n");
    for(int i = 0; i < m; i++) 
    {
        scanf("%d", &set1[i]);
    }
    printf("Enter the number of elements in set 2: ");
    scanf("%d", &n);
    int set2[n];
    printf("Enter elements of set 2:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &set2[i]);
    }
    int intersection[m < n ? m : n];
    int size = 0;
    Intersection(set1, set2, m, n, intersection, &size);
    printf("Intersection of the two sets: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d\t", intersection[i]);
    }
    printf("\n");

    return 0;
}