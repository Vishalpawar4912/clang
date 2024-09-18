// Accessing array elements using pointer.
#include<stdio.h>
int main()
{
    int x[] = {10, 20, 30, 40, 50};
    int *ptr, i;
    ptr = x;
    for(i = 0; i < 5; i++, ptr++)
    {
        printf("\nAddress : %u", &x[i]);
        printf("\nElements : %d %d %d %d", x[i], *(x + i), i[x], *ptr);
    }
    return 0;
}