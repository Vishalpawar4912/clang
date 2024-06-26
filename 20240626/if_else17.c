// Write a C program to find all roots of a quadratic equation (ax^2+bx+c=0).
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,discriminant,imaginary;
    printf("\n Enter values of a,b,c for quadratic equation : ");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("\nTwo real and distinct roots :%f and %f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("\nTwo real and equal roots :%f and %f",root1,root2);
    }
    else if(discriminant<0)
    {
        root1=-b/(2*a);
        root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("\nTwo distinct complex roots : %f + i%f and %f - i%f", root1,imaginary,root2,imaginary);
    }
}