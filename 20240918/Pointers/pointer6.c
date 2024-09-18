// Function returning a pointer.
#include<stdio.h>
int main()
{
    int *larger(int *, int *);
    int n1, n2, *max;
    printf("Enter the Two Numbers: \n");
    scanf("%d %d", &n1, &n2);
    max = larger(&n1, &n2);
    printf("\nThe Larger Value is %d", *max);
    return 0;
}
int *larger(int *ptrn1, int *ptrn2)
{
    if(*ptrn1 > *ptrn2)
        return(ptrn1);
    else
        return(ptrn2);
}