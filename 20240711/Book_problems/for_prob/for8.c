//8. Program to calculate the G.C.D. and L.C.M. of Two Numbers.
#include<stdio.h>
int main()
{
    int a, b, prod, lcm, temp;
    printf("Enter the Numbers :");
    scanf("%d %d", &a, &b);
    prod = a * b;
    for(; b != 0; )
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("The GCD is %d\n", a);
    lcm = prod / a;
    printf("The LCM is %d\n", lcm);
    return 0;
}
