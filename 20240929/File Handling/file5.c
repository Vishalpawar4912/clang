// 5. C program Copy the contents of one text file to another such that uppercase alphabets are converted to lowercase, lowercase to uppercase and digits are converted to *. 
//    The filenames are accepted as command line arguments.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    FILE *f1, *f2;
    char ch;
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");
    if((f1 == NULL) || (f2 == NULL))
    {
        printf("Error in opening files");
        exit(0);
    }
    while((ch = fgetc(f1)) != EOF)
    {
        if(isupper(ch))
            fputc(tolower(ch), f2);
        else
        if(islower(ch))
            fputc(toupper(ch), f2);
        else
        if(isdigit(ch))
            fputc('*', f2);
        else
            fputc(ch, f2);
    }
    fcloseall();
    return 0;
}