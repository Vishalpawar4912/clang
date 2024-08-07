//3. Accept n numbers, store them in an array and count the number of occurances of a specific number.
#include<stdio.h>
int main()
{
    int i, n, num[50], val, cnt;
    printf("How many Numbers: ");
    scanf("%d", &n);
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("Enter the Element to be counted:\n");
    scanf("%d", &val);
    cnt = 0;
    for(i = 0; i < n; i++)
    {
        if(num[i] == val)
        cnt++;
    }
    printf("%d occurs %d times", val, cnt);
}