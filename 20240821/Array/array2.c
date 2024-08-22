//2. To accept a number and convert it to octal and hexadecimal using functions.
#include<stdio.h>
int main()
{
    int dec;
    void dectoOct(int);
    void dectoHex(int);
    printf("Enter the decimal number: ");
    scanf("%d", &dec);
    dectoOct(dec);
    dectoHex(dec);
    return 0;
}
void dectoOct(int dec)
{
    int r[10], i = 0;
    while(dec > 0)
    {
        r[i] = dec % 8;
        i++;
        dec = dec / 8;
    }
    printf("The Octal Equivalent is: ");
    for(--i; i >= 0; i--)
    printf("%d", r[i]);
}
void dectoHex(int dec)
{
    int r[10], i = 0;
    while(dec > 0)
    {
        r[i] = dec % 16;
        i++;
        dec = dec / 16;
    }
    printf("\nThe Hexadecimal equivalent is: ");
    for(--i; i >= 0; i--)
    if(r[i] < 10)
        printf("%d", r[i]);
    else
        printf("%c", r[i] + 55);
}