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
    int n, i, j, spaces = 39;
    printf("How Many Lines :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%*s", spaces, " ");
        spaces = spaces - 1;
        for(j = 1, ch = 'A'; j <= i; j++, ch++)
            printf("%c", ch);
        ch = ch - 2;
        for(j = 1; j <= i - 1; j++, ch--)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}