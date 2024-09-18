//15. Write a C program to find diameter, circumference and area of circle using functions.
#include<stdio.h>
#define PI 3.142
double diameter(double rad)
{
    return 2 * rad;
}
double circumference(double rad)
{
    return 2 * PI * rad;
}
double area(double rad)
{
    return PI * rad * rad;
}
int main()
{
    double rad;
    printf("Enter the Radius of the Circle :");
    scanf("%lf", &rad);
    printf("Diameter : %.2lf\n", diameter(rad));
    printf("Circumference : %.2lf\n", circumference(rad));
    printf("Area : %.2lf\n", area(rad));
    return 0;
}