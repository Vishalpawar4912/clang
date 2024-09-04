// 5. Convert a string to uppercase and return the converted string using pointers.
#include<stdio.h>
#include<string.h> 

char *supper(char *s) 
{
    char *t = s;
    while(*s != '\0') 
    {
        if(islower(*s)) 
            *s = toupper(*s); 
        s++;
    }
    return t;
}
int main() 
{
    char str[80];
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0;
    printf("Uppercase String: %s\n", supper(str));
    return 0;
}
