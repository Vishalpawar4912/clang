// Write a C program to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    float root1, root2, discriminant, imaginary;
    printf("Enter the values of a,b,c for quadratic equation :");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    switch (discriminant > 0)
    {
    case 1:
        root1 = (- b + sqrt(discriminant)) / (2 * a);
        root2 = (- b - sqrt(discriminant)) / (2 * a);
        printf("\nTwo real and distinct roots :%f and %f", root1, root2);
        break;
    case 0:
        switch (discriminant < 0)
        {
        case 1:
            root1 = - b / (2 * a);
            root2 = - b / (2 * a);
            imaginary = sqrt(- discriminant) / (2 * a);
            printf("\nTwo distinct complex roots : %f + i%f and %f - i%f", root1, imaginary, root2, imaginary);
            break;
        case 0:
            root1 = - b / (2 * a);
            root2 = - b / (2 * a);
            printf("\nTwo real and equal roots :%.2f and %.2f", root1, root2);
            break;
        }
    
    }
}