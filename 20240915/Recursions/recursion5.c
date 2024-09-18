//5. Write a C program to find reverse of any number using recursion.
#include<stdio.h>
int reverse(int num, int rev) 
{
    if(num == 0)
        return rev;
    else 
    {
        return reverse(num / 10, rev * 10 + num % 10);
    }
}
int main() 
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Reverse of %d = %d", num, reverse(num, 0));
    return 0;
}