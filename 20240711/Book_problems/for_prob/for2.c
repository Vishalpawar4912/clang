// 2.To display n lines of Floyd's Triangle : 1
//                                            2 3
//                                            4 5 6
#include<stdio.h>
int main()
{
    int n, i, num, j;
    printf("How many Lines :");
    scanf("%d", &n);
    num = 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        printf("%d\t", num++);
        printf("\n");
    }
    return 0;
}