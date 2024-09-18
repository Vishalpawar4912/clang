//2. Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
int main() 
{
    int lower, upper, choice;
    printf("Enter the Lower Limit: ");
    scanf("%d", &lower);
    printf("Enter the Upper Limit: ");
    scanf("%d", &upper);
    printf("Enter 1 for Even numbers, 2 for Odd numbers: ");
    scanf("%d", &choice);
    if(choice == 1) 
    {
        printf("Even");
    } 
    else if(choice == 2) 
    {
        printf("Odd");
    }
    printf(" numbers from %d to %d are : ", lower, upper);
    EvenOdd(lower, upper, choice);
    return 0;
}
void EvenOdd(int current, int upper, int choice) 
{
    if(current > upper) return;
    if((current % 2 == 0 && choice == 1) || (current % 2 != 0 && choice == 2)) 
    {
        printf("%d, ", current);
    }
    EvenOdd(current + 1, upper, choice);
}