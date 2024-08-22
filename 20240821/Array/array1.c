//1. Accept a number and count its occurances in an array using function.
#include<stdio.h>
int occur(int a[50], int n, int num)
{
    int i, cnt = 0;
    for(i = 0; i < n; i++)
        if(a[i] == num)
            cnt++;
    return cnt;
}
int main()
{
    int a[50], num, i, n, ans;
    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    ans = occur(a, n, num);
    printf("%d occurs %d times ", num, ans);
    return 0;
}