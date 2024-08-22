//4. To accept n numbers and store them in an array such that they are in the sorted order. (Without sorting)
#include<stdio.h>
int main()
{
    int a[50], i, j, num, n, k;
    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if(i == 0)
            a[i] = num;
        else
        {
            for(k = i - 1; k >= 0; k--)
            {
                if(num < a[k])
                    a[k + 1] = a[k];
                else
                    break;
            }
            a[k + 1] = num;
        }
    }
    printf("The Array elements are: ");
    for(i = 0; i < n; i++)
        printf("%5d\t", a[i]);
    return 0;
}