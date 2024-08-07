//4. Accept n numbers in the range 1 - m and calculate how many times each number occurs (frequency of each number).
#include<stdio.h>
int main() 
{
    int i, n, m, num, cnt[100] = {0};
    printf("How many Numbers: ");
    scanf("%d", &n);
    printf("Enter the Range m: ");
    scanf("%d", &m);
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &num); 
        if(num >= 1 && num <= m) 
            cnt[num]++;
    }
    printf("\n Number Frequency \n");
    for(i = 1; i <= m; i++)
        printf("%d \t %d\n", i, cnt[i]); 
}