//21. Write a C program to print all Armstrong numbers between given interval using functions.
#include<stdio.h>
void findArmstrongNumbers(int start, int end) 
{
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for(int i = start; i <= end; i++) 
    {
        int sum = 0, temp = i; 
        while(temp != 0) 
        {
            int digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if(sum == i) printf("%d\t", i);
    }
}
int main() 
{
    int start, end;
    printf("Enter the start and end of the interval :");
    scanf("%d %d", &start, &end);
    findArmstrongNumbers(start, end);
    return 0;
}