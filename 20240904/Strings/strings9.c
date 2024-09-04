// 9. Reverse each word of sentence.
#include<stdio.h>
#include<string.h>
int main() 
{ 
    char s[80], rev[80], *p;
    puts("Please Enter the Sentence: ");
    fgets(s, sizeof(s), stdin); 
    s[strcspn(s, "\n")] = 0; 
    p = strtok(s, " ");
    while (p) 
    {
        strrev(p);
        strcat(rev, p);
        strcat(rev, " ");
        p = strtok(NULL, " ");
    }
    puts(rev);
    return 0; 
}
