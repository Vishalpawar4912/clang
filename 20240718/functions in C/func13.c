//13. write a function which accepts a character and integer n as parameters and displays the next n characters.
#include<stdio.h>
void displayChars(char c, int n) 
{
    for(int i = 0; i < n; i++) 
    {
        printf("%c ", c);
        c++;
    }
    printf("\n");
}

int main() 
{
    char c;
    int n;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Enter the number of characters to display: ");
    scanf("%d", &n);
    displayChars(c, n);
    return 0;
}
