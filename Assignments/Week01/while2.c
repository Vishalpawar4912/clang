//2.Write a C program that reads numbers until a zero is entered and then prints the largest number entered. Use a while loop to accomplish this.
#include<stdio.h>
int main() 
{
    int num, max = 0;
    printf("Enter the Number :");
    scanf("%d", &num);
    while (num != 0) 
    {
        if(num > max) 
        {
            max = num;
        }
        printf("Enter the Number Zero to Stop :");
        scanf("%d", &num);
    }
    printf("Largest Number is : %d\n", max);
    return 0;
}
