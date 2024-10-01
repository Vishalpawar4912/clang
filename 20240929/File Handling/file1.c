// 1. C Program to accept a filename from the user and display the contents of the file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c, name[20];
    FILE *fp1;
    printf("Enter the name of the file: ");
    scanf("%s", name);
    fp1 = fopen(name, "r");
    if(fp1 == NULL)
    {
        printf("Error Opening file");
        exit(0);
    }
    printf("\nThe Data in the file is : \n");
    while((c = fgetc(fp1)) != EOF)
        putchar(c);
    fclose(fp1);
    return 0;
}