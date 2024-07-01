// Write a program having a menu with the following options and corresponding actions :
// 1.Area of Square : Accept length , Compute area of square and print. area : l * l;
// 2.Area of Rectangle : Accept length and breadth , Compute area of rectangle and print. area : l * b;
// 3.Area of Triangle : Accept base and height , Compute area of tringle and print. area : (b * h) / 2;
#include <stdio.h>
int main()
{
    float area, length, breadth, base, height;
    int ch;
    do
    {
        printf("\n ----- MENU -----");
        printf("\n1. Area of Square");
        printf("\n2. Area of Rectangle");
        printf("\n3. Area of Triangle");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: // Area of Square
            printf("\nEnter the Length: ");
            scanf("%f", &length);
            area = length * length;
            printf("\n Area of Square: %.2f", area);
            break;
        case 2: // Area of Rectangle
            printf("\nEnter the Length: ");
            scanf("%f", &length);
            printf("\nEnter the Breadth: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("\n Area of Rectangle: %.2f", area);
            break;
        case 3: // Area of Triangle
            printf("\nEnter the Base: ");
            scanf("%f", &base);
            printf("\nEnter the Height: ");
            scanf("%f", &height);
            area = (base * height) / 2;
            printf("\n Area of Triangle: %.2f", area);
            break;
        }
    } while (ch != 4);
}