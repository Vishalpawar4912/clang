// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("\nEnter the sides of triangle :");
    scanf("%d%d%d", &side1, &side2, &side3);
    if((side1 == side2) && (side2 == side3))
    {
        printf("\nTriangle is Equilateral");
    }
    else if((side1 == side2) || (side1 == side3) || (side2 == side3))
    {
        printf("\nTriangle is Isosceles");
    }
    else{
        printf("\nTriangle is Scalene");
    }
}