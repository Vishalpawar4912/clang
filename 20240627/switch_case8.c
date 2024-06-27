//Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
int main()
{
    float result, num1, num2;
    char op , temp;
    printf("Enter <Num1> :");
    scanf("%f", &num1);
    printf("Enter <Operator>:");
    scanf("%c",&temp);
    scanf("%c",&op);
    printf("Enter <Num2> :");
    scanf("%f", &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default :
        printf("Invalid Operator");
        break;
    }
    printf("%f %c %f = %f", num1, op, num2, result);
}