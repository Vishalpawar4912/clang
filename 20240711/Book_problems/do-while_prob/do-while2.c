// 2.To display n lines of Floyd's Triangle : 1
//                                            2 3
//                                            4 5 6
#include<stdio.h>
int main()
{
    int n, i = 1, num, j;
    printf("How many Lines :");
    scanf("%d", &n);
    num = 1;
    do
    {
        for(j = 1; j <= i; j++)
        printf("%d\t", num++);
        printf("\n");
        i++;
    } while (i <= n);
    
}