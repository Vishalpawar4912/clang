//12. Write a function isEven , which accepts an integer as parameter and returns 1 if the number is even and 0 otherwise.
// use this function in main to accept n numbers and check whether they are even or odd.
#include<stdio.h>
int isEven(int n) 
{
    return n % 2 == 0;
}
int main()
{
    int n, num;
    printf("Enter the Number of Integers :");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
    {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &num);
        if(isEven(num)) 
        {
            printf("%d is even\n", num);
        } 
        else 
        {
            printf("%d is odd\n", num);
        }
    }
    return 0;
}