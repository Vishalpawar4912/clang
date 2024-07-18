//8. Function which accepts two alphabets and displays all the alphabets between the two.
#include<stdio.h>
void display(char c1, char c2) 
{
    char c;
    if(c1 > c2) 
    {
        printf("\nInvalid Arguments!");
    } 
    else 
    {
        for(c = c1; c <= c2; c++) 
        {
            printf("%c\t",c);
        }
    }
}
int main() 
{
    char ch1, ch2;
    printf("Enter the Starting Character : ");
    scanf(" %c", &ch1);
    printf("Enter the Ending Character : ");
    scanf(" %c", &ch2);
    display(ch1, ch2);
    return 0;
}
