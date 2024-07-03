// 4. Write a program to accept an integer and check if it is prime or not. 
#include<stdio.h>
int main()
{
    int num, temp = 0;
    printf("Enter the Number to check Prime or Not :\n");
    scanf("%d", &num);
    int i = 2;
    do
    {
        if(num % i == 0)
        {
            temp++;
            break;
        }
        i++;
    } while (i <= num / 2);

    if(temp == 0 && num != 0)
    {
        printf("%d is Prime Number", num);
    }
    else{
        printf("%d is Not Prime Number", num);
    }

}