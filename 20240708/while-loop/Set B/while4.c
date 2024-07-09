// 4. Write a program to accept characters till the user enters EOF and count number of alphabets and digits entered.
#include<stdio.h>
int main()
{
    char str[100];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;
    printf("Input the String :");
    gets(str);
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alp++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if(str[i] != ' ' && str[i] != '\n')
        {
            splch++;
        }
        i++;
    }
    printf("Number of Alphabets in the String is :%d\n", alp);
    printf("Number of Digits in the String is :%d\n", digit);
    printf("Number of Special Characters in the String is :%d\n", splch);
}
