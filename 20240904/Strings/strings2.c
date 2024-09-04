// 2. Menu driven program to perform operations on strings using user defined functions.
//     1. Length of String
//     2. Copy String
//     3. Convert to Uppercase
//     4. String Concatination
//     5. Find Occurance of String
#include<stdio.h>
int main()
{
    char s1[20], s2[20];
    int ch;
    do
    {
        printf("\n1: Length Of String");
        printf("\n2: Copy String");
        printf("\n3: Convert to Uppercase");
        printf("\n4: String Concatination");
        printf("\n5: Find Occurance of String");
        printf("\n6: Exit\n");
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter the String: ");
                gets(s1);
                printf("The Length is %d\n", slength(s1));
                break;
            case 2:
                printf("\nEnter the String: ");
                gets(s1);
                scopy(s1, s2);
                printf("The Copied String is %s\n", s2);
                break;
            case 3:
                printf("\nEnter the String: ");
                gets(s1);
                supper(s1);
                printf("The Uppercase String is %s\n", s1);
                break;
            case 4:
                printf("\nEnter the First String: ");
                gets(s1);
                printf("\nEnter the Second String: ");
                gets(s2);
                sconcat(s1, s2);
                printf("The COncatenated String is %s\n", s1);
                break;
            case 5:
                printf("\nEnter the First String: ");
                gets(s1);
                printf("\nEnter the Second String: ");
                gets(s2);
                if(stroccr(s1, s2) == NULL)
                    printf("S2 is not Present in S1\n");
                else
                    printf("S2 is Present in S1\n");
        }
    } while(ch != 6);
}
