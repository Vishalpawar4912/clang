//3. To accept n numbers in an array and shift all negative numbers to the end of the array. (Do not sort the array)
//   Example.
//   Input : 5  15  -2  45  -36  -9  12
//   Output : 5  10  45  12  -2  -36  -9
#include<stdio.h>
int main()
{
    int a[50], i, j, n, last, temp;
    printf("How many Numbers: ");
    scanf("%d", &n);
    last = n - 1;
    printf("Enter the Numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; )
    {
        if(a[i] < 0)
        {
            temp = a[i];
            for(j = i; j <= last; j++)
            {
                a[j] = a[j + 1];
                a[last] = temp;
            }
            n--;
        }
        else
        i++;
    }
    printf("The shifted numbers are: ");
    for(i = 0; i <= last; i++)
    {
        printf("%5d\t", a[i]);
    }
    return 0;
}