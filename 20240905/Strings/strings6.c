// 6. Write a program in C , which will accept a string and copies it into another string such that only alternate characters are copied.
//     (Use Pointers). ex., if S1 = "Hello World", then S2 = "HloWrd".
#include<stdio.h>
#include<conio.h>
int main()
{
    char a[80], b[40], *pa, *pb;
    int i = 1;
    printf("Enter the String: ");
    gets(a);
    pa = &a[0];
    pb = &b[0];
    while(*pa != '\0')
    {
        if(i % 2 != 0)
        {
            *pb = *pa;
            *pb++;
        }
        pa++;
        i++;
    }
    *pb = '\0';
    printf("\nCopied String is: ");
    puts(b);
    return 0;
}