// 4. Write a program to accept an integer and check if it is prime or not. 
#include<stdio.h>
int main()
{
    int num, flag = 0;
    printf("\nEnter the number to check Prime or Not :");
    scanf("%d", &num);
    if(num == 0)
    {
        printf("%d is Not Prime Number", num);
        return 0;
    }
    for(int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is Prime Number", num);
    } else{
        printf("%d is Not Prime Number", num);
    }
    return 0;
}