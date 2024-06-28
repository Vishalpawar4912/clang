// Accept radius from the user and write a program having menu with following options and corresponding actions:
//1.Area of Circle : Compute area of circle and print. area: PI * r * r;
//2.Circumference of Circle : Compute circumference of circle and print. cir: 2 * PI * r;
//3.Volume of Sphere : Compute volume of sphere and print. vol: 4 / 3 * PI * r * r * r;
#include<stdio.h>
#define PI 3.142
int main()
{
    float area, radius, cir, vol;
    int ch;
    do
    {
    printf("\n ----- MENU -----");
    printf("\n1. Area of Circle");
    printf("\n2. Circumference of Circle");
    printf("\n3. Volume of Sphere");
    printf("\nEnter your choice :");
    scanf("%d", &ch);
    printf("\nEnter your radius :");
    scanf("%f", &radius);
    switch(ch)
    {
        case 1: //Area of Circle
            area = PI * radius * radius;
            printf("\nArea of Circle : %f", area);
            break;
        case 2: //Circumference of Circle
            cir = 2 * PI * radius;
            printf("\n Circumference of Circle : %f", cir);
            break;
        case 3: //Volume of Sphere
            vol = 4 / 3 * PI * radius * radius * radius;
            printf("\n Volume of Sphere : %f", vol);
            break;
    }

    } while (ch =! 4);
}