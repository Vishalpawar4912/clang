// 3.To display Multiplication tables 1 to 10(n multiples each). The required display is:
// 1 * 1 = 1      2 * 1 = 2      3 * 1 = 3      .........................   10 * 1 = 10
// 1 * 2 = 2      2 * 2 = 4      3 * 2 = 6      .........................   10 * 2 = 20
//                                 .
//                                 .
//                                 .
// 1 * 10 = 10    2 * 10 = 20    3 * 10 = 30    .........................   10 * 10 = 100
// if the multiples do not fit on a single screen , display each screen after a pause. (about 24 multiples will fit on a scree).
#include<stdio.h>
int main()
{
    int i = 1, j = 1, n, cnt = 1;
    printf("How many Multiples :");
    scanf("%d", &n);
    do
    {
        for(j = 1; j <= n; j++)
        printf("%2d * % 2d = %3d\t", j, i, j * i);
        printf("\n");
        if(cnt % 24 == 0)
        {
            printf("Press any key to continue");
        }
        i++;
        cnt++;
    } while (i <= 10);
    return 0;
}