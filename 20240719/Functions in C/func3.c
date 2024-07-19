//3. Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
int max(int n1, int n2)
{
    return (n1 > n2) ? n1 : n2; 
}
int min(int n1, int n2)
{
    return (n1 < n2) ? n1 : n2;
}
int main()
{
    int n1, n2;
    printf("Enter the Numbers :");
    scanf("%d %d", &n1, &n2);
    printf("Maximum : %d\n", max(n1, n2));
    printf("Minimum : %d\n", min(n1, n2));
    return 0;
}