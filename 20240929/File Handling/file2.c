// 2. C Program to accept characters from the keyboard till user enters EOF and store them in a file. Read the file contents and display on the screen. 
//    The number of characters is also displayed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    FILE *fp1;
    int cnt = 0;
    fp1 = fopen("data.txt", "w");
    if(fp1 == NULL)
    {
        printf("Error Opening File");
        exit(0);
    }
    while(c = getchar() != EOF)
        putc(c, fp1);
    fclose(fp1);
    fp1 = fopen("data.txt", "r");
    if(fp1 == NULL)
    {
        printf("\nError Opening file");
        exit(0);
    }
    printf("\nThe data in the file is: \n");
    while(c = fgetc(fp1) != EOF)
    {
        printf("%c", c);
        cnt++;
    }
    printf("\nNumber of Characters = %d", cnt);
    fclose(fp1);
    return 0;
}