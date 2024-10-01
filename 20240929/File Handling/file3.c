// 3. C Program to read information from a text file and find the length of the longest line.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1;
    char ch, fname[80];
    int max = 0, cnt;
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    f1 = fopen(fname, "r");
    if(f1 == NULL)
    {
        printf("File Opening Error");
        exit(0);
    }
    cnt = 0;
    while(ch = fgetc(f1) != EOF)
    {
        if(ch == '\n')
        {
            if(cnt > max)
                max = cnt;
            cnt = 0;
        }
        cnt++;
    }
    if(cnt > max)
        max = cnt;
    printf("\nThe Length of the Longest Line is %d", max);
    return 0;
}