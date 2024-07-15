//2.Write a program in C to display the n terms of a harmonic series and their sum.
//The series is : 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
#include<stdio.h>
int main()
{
    int i = 1, n;
    float sum = 0.0;
    printf("Enter the Number of Terms :");
    scanf("%d", &n);
    printf("\n");
    do
    {
        if(i < n)
        {
            printf("1/%d + ", i);
            sum = sum + 1 / (float) i;
        }
        if(i == n)
        {
            printf("1/%d ", i);
            sum = sum + 1 / (float) i;
        }
        i++;
    } while (i <= n);
    printf("\nSum of Series upto %d terms : %f", n, sum);
    return 0;
}

