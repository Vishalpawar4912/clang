// 1. Menu driven program to perform operations on strings using standard library functions.
//     1. Length of String
//     2. Copy String
//     3. Convert to Uppercase
//     4. String Concatination
//     5. Find Occurance of String
#include<stdio.h>
#include<string.h>

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
        getchar();
        switch(ch) 
        {
            case 1:
                printf("\nEnter the String: ");
                gets(s1);
                printf("The Length is %d\n", strlen(s1));
                break;
            case 2:
                printf("\n Enter the String: ");
                gets(s1);
                printf("The Copied String is %s\n", strcpy(s2, s1));
                break;
            case 3:
                printf("\nEnter the String: ");
                gets(s1);
                printf("The Uppercase String is %s\n", strupr(s1));
                break;
            case 4:
                printf("\nEnter the First String: ");
                gets(s1);
                printf("\nEnter the Second String: ");
                gets(s2);
                strcat(s1, s2);
                printf("The Concatenated String is %s\n", s1);
                break;
            case 5:
                printf("\nEnter the First String: ");
                gets(s1);
                printf("\nEnter the Second String: ");
                gets(s2);
                if(strstr(s1, s2) == NULL)
                    printf("S2 is not Present in S1\n");
                else
                    printf("S2 is Present in S1\n");
                break;
        }
    } while(ch != 6);
    return 0;
}