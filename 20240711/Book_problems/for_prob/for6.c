//6. Program to accept a Number and check whether it is an Armstrong Number (i.e.The Sum of Cube of its Digits = Number itself);
#include<stdio.h>
int main()
{
    int n1, n2, sum = 0, last;
    printf("Enter the Number :");
    scanf("%d", &n1);
    n2 = n1;
    for( ; n1 > 0 ; )
    {
        last = n1 % 10;
        sum = sum + last * last * last;
        n1 = n1 / 10;
    }
    if(n2 == sum)
        printf("%d is an Armstrong", n2);
    else
        printf("%d is not an Armstrong", n2);
    return 0;
}
