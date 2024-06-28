// Accept two numbers in variable x and y from the user and perform the following operations:
//1.Equality : check if x is equal to y
//2.Less Than : check if x is less then y
//3.Quotient and Remainder : Divide x by y and display the quotient and remainder
//4.Range : Accept a number and check if it lies between x and y (both inclusive)
//5.Swap : Interchange x and y
#include<stdio.h>
int main()
{
    int x, y, ch, num, temp, quo, rem;
    do
    {
        printf("\n ----- MENU -----");
        printf("\n1. Equality");
        printf("\n2. Less Than");
        printf("\n3. Quotient and Remainder");
        printf("\n4. range");
        printf("\n5. Swap");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: //Equality
                printf("Enter the numbers :");
                scanf("%d %d", &x, &y);
                if(x == y)
                    printf("%d is equal to %d", x, y);
                else
                    printf("%d is not equal to %d", x, y);
                break;
            case 2: //Less Than
                printf("Enter the numbers :");
                scanf("%d %d", &x, &y);
                if(x < y)
                    printf("%d is less then %d", x, y);
                else
                    printf("%d is not less then %d", x, y);
                break;
            case 3: //Quotient and Remainder
                printf("Enter the numbers :");
                scanf("%d %d", &x, &y);
                quo = x / y;
                printf("Quotient : %d", quo);
                rem = x % y;
                printf("\nRemainder : %d", rem);
                break;
            case 4: //Range
                printf("Enter the numbers :");
                scanf("%d %d", &x, &y);
                printf("Enter number :");
                scanf("%d", &num);
                if(x <= num && y >= num)
                    printf("%d is lies between %d and %d", num, x, y);
                else
                    printf("%d is not lies between %d and %d", num, x, y);
                break;
            case 5: //Swap
                printf("Enter the numbers :");
                scanf("%d %d", &x, &y);
                temp = x;
                x = y;
                y = temp;
                printf("The Interchange Numbers are %d and %d", x, y);
                break;
        }
    }while(ch != 6);
}