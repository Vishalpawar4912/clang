// Accept single digit  from the user and display it in words. for example  if digit entered is 9, display Nine.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Single Digit :");
    scanf("%d", &n);
    switch(n)
    {
        case 0: printf("Zero");
            break;
        case 1: printf("One");
            break;
        case 2: printf("Two");
            break;
        case 3: printf("Three");
            break;
        case 4: printf("Four");
            break;
        case 5: printf("Five");
            break;
        case 6: printf("Six");
            break;
        case 7: printf("Seven");
            break;
        case 8: printf("Eight");
            break;
        case 9: printf("Nine");
            break;
        default: printf("Invalid Digit");
            break;
    }
}