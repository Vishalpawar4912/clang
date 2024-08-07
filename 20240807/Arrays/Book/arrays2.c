//2. Accept n numbers, store them in an array and search for given number using linear search.
#include<stdio.h>
int main()
{
    int i, n, num[50], val;
    printf("How many Numbers: ");
    scanf("%d", &n);
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("Enter the Element to be searched:\n");
    scanf("%d", &val);
    for(i = 0; i < n; i++)
    {
        if(num[i] == val)
        {
            printf("%d found at position %d", val, i);
            break;
        }
    }
    if(i == n)
        printf("%d not found", val);
}