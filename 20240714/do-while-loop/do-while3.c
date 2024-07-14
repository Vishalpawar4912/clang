//3. Write a program in C to display the cube of the number up to an integer.
#include<stdio.h>
int main()
{
    int i = 1, cnt;
    printf("Enter the Number of Terms :");
    scanf("%d", &cnt);
    do
    {
        printf("Number is : %d and cube of the %d is :%d \n", i, i, (i * i * i));
    } while (i <= cnt);
    return 0;
}
