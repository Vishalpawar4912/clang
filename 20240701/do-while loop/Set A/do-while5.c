// 5. Write a program to accept a character, an integer n and display the next n characters.
#include<stdio.h>
int main()
{
    int n, i = 1;
    char ch;
    printf("Enter the Character :\n");
    scanf("%c", &ch);
    printf("Enter the Limit to the Next n Characters :\n");
    scanf("%d", &n);
    do
    {
        ch = ch + 1;
        if(ch == 'z' || ch == 'Z')
        {
            printf("Large Limit");
            i = n;
        }
        else{
            printf("%c\n", ch);
            i++;
        }
    } while (i <= n);
    
}