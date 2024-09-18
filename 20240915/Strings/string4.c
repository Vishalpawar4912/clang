// 4. Copy one string to another and return the copied string using pointers.
#include <stdio.h>
char *scopy(char *dest, const char *src) 
{
    char *ptr = *dest;
    while ((*dest++ = *src++) != '\0');
    return ptr;
}

int main() 
{
    char src[20], dest[20];
    printf("Enter the String: ");
    scanf("%s", src);
    scopy(dest, src);
    printf("Copied String: %s\n", dest);
    return 0;
}