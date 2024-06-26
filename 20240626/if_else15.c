// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("\nEnter the sides of Triangle :");
    scanf("%d%d%d", &side1, &side2, &side3);
    if((side1 + side2) > side3)
    {
        if((side1 + side3) > side2)
        {
            if((side2 + side3) > side1)
            {
                printf("\nTriangle is Valid");
            }
            else{
                printf("\nTraingle is not valid");
            }
        }else{
            printf("\n Traingle is not valid");
        }
    }
    else{
        printf("\nTriangle is not valid");
    }
}