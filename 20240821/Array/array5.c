//5. To find the union and intersection of two arrays.
//   Example.
//   A = {1, 2, 5, 7}  B = {1, 4, 7}
//   Union = {1, 2, 4, 5, 7}
//  Intersection = {1, 7}
#include<stdio.h>
int main()
{
    int a[50], b[50], c[100], d[100], i, j, m, n, k;
    printf("How many numbers in first set: ");
    scanf("%d", &m);
    printf("Enter the numbers in first set:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("How many numbers in second set: ");
    scanf("%d", &n);
    printf("Enter the numbers in second set:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);
    k = setunion(a, b, c, m, n);
    printf("The union is: ");
    for(i = 0; i < k; i++)
        printf("%d\t", c[i]);
    k = intersect(a, b, d, m, n);
    printf("\nThe intersection is: ");
    for(i = 0; i < k; i++)
        printf("%d\t", d[i]);
    return 0;
}
int setunion(int a[], int b[], int c[], int m, int n)
{
    int i, j, k = 0, found;
    for(i = 0, k = 0; i < m; i++, k++)
        c[k] = a[i];
    for(j = 0; j < n; j++)
    {
        found = 0;
        for(i = 0; i < m; i++)
            if(b[j] == c[i])
            {
                found = 1;
                break;
            }
        if(found == 0)
            c[k++] = b[j];
    }
    return k;
}
int intersect(int a[], int b[], int c[], int m, int n)
{
    int i, j, k = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(a[i] == b[j])
                c[k++] = a[i];
    return k;
}