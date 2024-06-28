// accept characters from keyboard till user enters EOF(Ctrl+Z) and count number of vowels ,spaces and lines in text.
#include<stdio.h>
int main()
{
    char ch;
    int scnt = 0, vcnt = 0, lcnt = 0;
    printf("enter the text press ctrl+z to stop :");
    ch = getchar();
    while(ch != EOF)
    {
        switch(ch)
        {
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
            vcnt++;
            break;
            case ' ' : scnt++;
            break;
            case '\n' : lcnt++;
            break;
        }
    ch = getchar();
}
    printf("number of spaces : %d\n", scnt);
    printf("number of lines : %d\n", lcnt);
    printf("number of vowels : %d", vcnt);
}