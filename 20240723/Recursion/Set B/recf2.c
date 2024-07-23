//2. Write a recursive function to calculate the sum of digits of a number till you get a single digit number.
// Example. 961 -> 16 -> 7 (Note : Do not use loop)
#include<stdio.h>
int sum(int num) 
{
    if(num < 10) 
    {  
        return num;
    } 
    else 
    {
        return sum((num % 10) + (num / 10));  
    }
}
int main()
{
    int num, result;
    printf("Enter the Number :");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of Digits of %d is %d", num, result);
    return 0;
}