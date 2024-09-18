// Illustrate pointer to pointer.
#include<stdio.h>
int main()
{
    int i = 10, *p1, **p2, ***p3;
    p1 = &i;
    p2 = &p1;
    p3 = &p2;
    printf("\nThe Value of i is %d %d %d %d", i, *p1, **p2, ***p3);
    printf("\nThe Address of i is %u %u %u %u", &i, p1, *p2, **p3);
    return 0;
}