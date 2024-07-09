// 5. Write a program, which accepts a number n and displays each digit in words. Example: 6702 Output = Six-Seven-Zero-Two. 
// (Hint: Reverse the number and use a switch statement) 
#include<stdio.h>
int main()
{
    int num, rev = 0, digit;
    printf("Enter the Number :");
    scanf("%d", &num);
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    while(rev > 0)
    {
        digit = rev % 10;
        rev = rev / 10;
        switch(digit)
        {
            case 1:
                printf(" ONE ");
                break;
            case 2:
                printf(" TWO ");
                break;            
            case 3:
                printf(" THREE ");
                break;            
            case 4:
                printf(" FOUR ");
                break;            
            case 5:
                printf(" FIVE ");
                break;            
            case 6:
                printf(" SIX ");
                break;            
            case 7:
                printf(" SEVEN ");
                break;            
            case 8:
                printf(" EIGHT ");
                break;            
            case 9:
                printf(" NINE ");
                break;            
            case 0:
                printf(" ZERO ");
                break;
        }
    }
    return 0;
}