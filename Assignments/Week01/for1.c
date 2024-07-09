//1.Write a C program that prints all prime numbers between 1 and 100 using a for loop.
#include<stdio.h>
int main() 
{
    int i, j, flag;
    for(i = 2; i <= 100; i++) 
    {
        flag = 0;
        for(j = 2; j <= i/2; j++) 
        {
            if(i%j == 0) 
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
