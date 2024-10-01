// 4. C Program to copy contents of one file to another. The filenames are passed using command line arguments.
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    if(argc != 3)
    {
        printf("\nInvalid number of arguments");
        printf("\nUsage is<prog name><source><target>");
        exit(0);
    }
    if((fp1 = fopen(argv[1], "r")) == NULL)
    {
        printf("\nError opening source file");
        exit(0);
    }
    if((fp2 = fopen(argv[2], "w")) == NULL)
    {
        printf("\nError opening target file");
        exit(0);
    }
    while(!feof(fp1))
    {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}