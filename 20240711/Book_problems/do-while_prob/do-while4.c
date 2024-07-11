// 4. To Display n lines of the following Triangle.,   
//                                                       A   
//                                                     A B A 
//                                                   A B C B A 
//                                                       .
//                                                       .
#include<stdio.h>
int main()
{
    char ch;
    int n, i = 1, j, spaces = 39;
    printf("How Many Lines :");
    scanf("%d", &n);
    do
    {
        printf("%*s", spaces, " ");
        spaces = spaces - 1;
        for(j = 1, ch = 'A'; j <= i; j++, ch++)
            printf("%c", ch);
        ch = ch - 2;
        for(j = 1; j <= i - 1; j++, ch--)
            printf("%c", ch);
        printf("\n");
        i++;
    } while (i <= n);
    return 0;
}

