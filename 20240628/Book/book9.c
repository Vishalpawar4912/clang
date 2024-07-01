// write a program having menu that has three options: add, subtract or multiply two fractions.
// The two fractions and the options are taken as input and the result is displayed as output.
// Each fraction is read as two integers, numerator and denominator.
#include <stdio.h>
int main()
{
    int n1, n2, m1, m2;
    int ch, den, num;
    printf("Enter 1st Fraction \n Numerator :");
    scanf("%d", &n1);
    printf("Denominator :");
    scanf("%d", &n2);
    printf("Enter 2nd Fraction \n Numerator :");
    scanf("%d", &m1);
    printf("Denominator :");
    scanf("%d", &m2);
    printf("1.Addition\n2.Subtract\n3.Multiplication :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        num = (n1 * m2) + (n2 * m1);
        den = (n2 * m2);
        printf("Addition is %d / %d", num, den);
        break;
    case 2:
        num = (n1 * m2) - (n2 * m1);
        den = (n2 * m2);
        printf("Sbtraction is %d / %d", num, den);
        break;
    case 3:
        num = (n1 * m1);
        den = (n2 * m2);
        printf("Multiplication is %d / %d", num, den);
        break;
    }
}