// Illustrate arrays and pointers.
#include<stdio.h>
int main()
{
    int a[10], n, i;
    void display(int *x, int n);
    printf("How Many Numbers: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nYou Entered: \n");
    display(a,n);
    return 0;
}
void display(int *x, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\t", x[i]);
    }
}