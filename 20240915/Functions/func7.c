//7. Function to calculate area of circle (pi * r * r) and use this function to calculate volume of the cylinder (pi * r * r * h).
#include<stdio.h>
#define PI 3.142
float area(float r)
{
    return PI * r * r;
}
float volume(float r, float h)
{
    return area(r) * h;
}
int main()
{
    float radius, height, a, v;
    printf("Enter the value of Radius :");
    scanf("%f", &radius);
    printf("Enter the value of Height :");
    scanf("%f", &height);
    a = area(radius);
    printf("The Area of Circle is : %f", a);
    v = volume(radius, height);
    printf("\nThe Volume of Cylinder is : %f", v);
    return 0;
}