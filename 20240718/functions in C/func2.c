//2. Interchanging Two Numbers using call by value.
#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nIn Function Interchange x = %d, y = %d", x, y);
}
int main()
{
    int a = 10, b = 20;
    void swap(int, int);
    printf("Before Interchange a = %d, b = %d", a, b);
    printf("\nAddress of a:%d, b:%d", &a, &b);
    swap(a, b);
    printf("\nAfter Interchange a = %d, b = %d", a, b);
    printf("\nAddress of a:%d, b:%d", &a, &b);
    return 0;
}