// 4. Write a program to accept an integer and check if it is prime or not. 
#include<stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the Number to check Prime or Not : \n");
    scanf("%d", &num);
    if(num == 0)
    {
        printf("%d is Not Prime Number", num);
        return 0;
    }
    int i = 2;
    while(i <= num / 2)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        printf("%d is Prime Number", num);
    } else{
        printf("%d is Not Prime Number", num);
    }
    return 0;
}