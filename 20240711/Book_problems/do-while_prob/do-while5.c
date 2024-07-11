// 5. To Display n lines of Pascal Triangle.
//                                         1
//                                       1    1
//                                     1    2   1
//                                   1   3    3   1
//                                 1   4    6   4   1
//                               1   5   10   10  5   1
#include<stdio.h>
int main() {
    int n, i = 1, j, num, spaces = 39;
    printf("How many Lines :");
    scanf("%d", &n);
    printf("\n The Pascal Triangle is \n");
    do
    {
        printf("%*s", spaces, " ");
        spaces = spaces - 1;
        num = 1;
        for(j = 1; j <= i; j++) 
        {
            printf(" %d ", num);
            num = num * (i - j) / j;
        }
        printf("\n");
        i++;
    } while (i <= n);
    return 0;
}
