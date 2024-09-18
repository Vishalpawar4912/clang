// Array of pointers.
#include<stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int i, *ptr[3];
    for(i = 0; i < 3; i++)
        ptr[i] = arr + i;
    for(i = 0; i < 3; i++)
        printf("\nAddress : %u Value : %d", ptr[i], *ptr[i]);
    return 0;
}