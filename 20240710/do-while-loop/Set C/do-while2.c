//2. Write a program which accepts a number and checks if the number is a palindrome (Hint number = reverse of number) 
//Example:Input    :3472 Output : It is not a palindrome  number
//        Input    :262, Output : It is a palindrome  
#include<stdio.h>
int main()
{
    int rev = 0, n, rem, org;
    printf("Enter the Number :");
    scanf("%d", &n);
    org = n;
    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/ 10; 
    } while (n != 0);
    if(org == rev)
    {
        printf("%d is Palindrome Number", org);
    }
    else
    {
        printf("%d is not Palindrome Number", org);
    }
    return 0;
}

