//1. Write a program to accept characters from user till the user enters * and count the number of characters, words and lines enterd by the user. 
//(Hint: Use a flag to count words. Consider delimiters like \n\t,;. and space for counting words).
#include<stdio.h>
int main()
{
    char ch;
    int ccnt = 0, wcnt = 0, lcnt = 0;
    int flag = 0;
    printf("Enter Character (enter '*' to stop):\n");
    for(; ch != '*' ;)
    {
        ch = getchar();
        if(ch != '*')
        {
            ccnt++;
            if(ch == '\n')
            {
                lcnt++;
            }
            if (ch == ' ' || ch == ',' || ch == '\t' || ch == ';' || ch == '.' || ch == '\n') 
            {
                flag = 0;
            } 
            else 
            {
                if (flag == 0) 
                {
                    wcnt++;
                    flag = 1;
                }
            }
        }
    }
    if (ccnt > 0 && flag == 1) 
    {
        lcnt++;
    }
    printf("Number of characters: %d\n", ccnt);
    printf("Number of words: %d\n", wcnt);
    printf("Number of lines: %d\n", lcnt);
    return 0;
}