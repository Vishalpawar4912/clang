#include<stdio.h>

int main() 
{
    int num, rev = 0, digit;
    printf("Enter the Number :");
    scanf("%d", &num);
    for(; num > 0 ;) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    for(; rev > 0 ;) 
    {
        digit = rev % 10;
        rev /= 10;
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
