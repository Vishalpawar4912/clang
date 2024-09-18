// Illustrate the basic pointer use.
#include<stdio.h>
int main()
{
    int n = 20, *ptr_n;
    ptr_n = &n;
    printf("\nDirect Access, Value : %d", n);
    printf("\nIndirect Access, Value : %d", *ptr_n);
    printf("\nDirect Access, Address : %u", &n);
    printf("\nIndirect Access, Address : %u", ptr_n);
    n = 30;
    printf("\nDirect Modification, Value : %d %d", n, *ptr_n);
    *ptr_n = 50;
    printf("\nIndirect Modification, Value : %d %d", n, *ptr_n);
    return 0;
}