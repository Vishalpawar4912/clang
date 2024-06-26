// Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int n1, n2 ,n3 ,max;
    printf("\n Enter Three Numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1 > n2)
    {
        if(n1 > n3)
        {
            max = n1;
        }
        else{
            max = n3;
        }
    }
    else if(n2 > n3)
        {
            max = n2;
        }
        else{
            max = n3;
        }
    printf("\n %d is maximum number", max);
}
