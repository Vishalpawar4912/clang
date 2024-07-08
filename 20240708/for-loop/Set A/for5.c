// 5. Write a program to accept a character, an integer n and display the next n characters.
#include<stdio.h>
int main()
{
    int n, i;
    char ch;
    printf("\nEnter the Character :");
    scanf("%c", &ch);
    printf("\nEnter the Limit to Next n Characters :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        ch = ch + 1;
        if(ch == 'z' || ch == 'Z')
        {
            printf("Large Limit");
            break;
        }
        else{
            printf("%c\n", ch);
        }
    }
}