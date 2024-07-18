//3. function to accept a character and return 1 if it is an alphabet and return 2 if it is a digit and return 3 otherwise. 
#include<stdio.h>
#include<ctype.h>
int check (char ch)
{
    if(isalpha (ch))
        return 1;
    if(isdigit (ch))
        return 2;
    return 3;
}
int main()
{
    char ch;
    int c1 = 0, c2 = 0, c3 = 0;
    printf("Enter Characters - type CTRL+Z when done :\n");
    while ((ch = getchar()) != EOF)
    switch(check(ch))
    {
        case 1: c1++;
            break;
        case 2: c2++;
            break;
        case 3: c3++;
            break;
    }
    printf("\nThe Number of Alphabets = %d", c1);
    printf("\nThe Number of Digits = %d", c2);
    printf("\nThe Number of Special Symbols = %d", c3);
    return 0;
}