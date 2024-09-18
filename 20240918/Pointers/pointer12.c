// 12. Write a C program to display command line arguments along with length of the longest argument.
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i, max_len = 0;
    printf("Number of Command Line Arguments : %d\n", argc);
    for(i = 1; i < argc; i++)
    {
        printf("Argument %d : %s (Length : %d)\n", i, argv[i], strlen(argv[i]));
        if(strlen(argv[i]) > max_len)
        {
            max_len = strlen(argv[i]);
        }
    }
    printf("\nThe Length of the Longest Argument : %d\n", max_len);
    return 0;
}



// Compile and run:

// bash
// gcc program.c -o program
// ./program arg1 arg2 arg3

// gcc pointer12.c -o pointer12
// ./pointer12 Hello World Programming
// ./pointer12 My Name Is Vishal