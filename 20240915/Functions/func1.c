//1. Interchange of Two Numbers using call by reference.
#include<stdio.h>
void swap(int *x, int *y) 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() 
{
    int a = 10, b = 20;
    printf("Before Interchange a = %d, b = %d\n", a, b);
    printf("Address of a:%d, b:%d\n", &a, &b);
    swap(&a, &b);
    printf("After Interchange a = %d, b = %d\n", a, b);
    printf("Address of a:%d, b:%d\n", &a, &b);
    return 0;
}