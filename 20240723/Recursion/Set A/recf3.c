//3. Write a recursive C function to calculate x^y. (Do not use standard library function)
#include<stdio.h>
int power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}
int main()
{
    int pow, num;
    int result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %d", num, pow, result);
    return 0;
}