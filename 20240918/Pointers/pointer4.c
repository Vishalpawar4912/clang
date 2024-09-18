// Pointer as function arguments.
#include<stdio.h>
int main()
{
    void modify(int *, int *);
    int n1, n2;
    printf("Enter the Two Numbers: \n");
    scanf("%d %d", &n1, &n2);
    modify(&n1, &n2);
    printf("\nThe Modified Values are %d %d", n1, n2);
    return 0;
}
void modify(int *ptrn1, int *ptrn2)
{
    // *ptrn1 = 50;
    // *ptrn2 = 100;
    printf("Enter Modified Values : \n");
    scanf("%d %d", ptrn1, ptrn2);
}