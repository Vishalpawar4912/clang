// 1. Write Functions for the following :
//     1. char *upper(char *s) : converts a string to uppercase and returns the converted string.
//     2. char *lower(char *s) : converts a string to lowercase and returns the converted string.
//     3. int count(char *s, char ch) : returns the number of times char ch occurs in string s.
//     4. char *replace(char *s, hcar ch1, char ch2) : replacers all occurances of ch1 in string s by ch2 and returns the converted string.
//     5. char *encrypt(char *s, int key) : encrypts string s by value key. Returns the encrypted string.
//     6. char *expand(char s, char t) : which converts characters like newline and tab into visible sequences like \n \t as it copies 
//        string s to string t. Returns string t.
//     7. int compare(char *s1, char *s2) : compares two strings and returns difference between them and 0 if equal.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *upper(char *s);
char *lower(char *s);
int count(char *s, char ch);
char *replace(char *s, char ch1, char ch2);
char *encrypt(char *s, int key);
char *expand(char *s, char *t);
int compare(char *s1, char *s2);

int main()
{
   char str[100] = "Hello, World!";
   char result[200];
   printf("Original String : %s\n", str);
   printf("Uppercase : %s\n", upper(str));
   strcpy(str, "Hello, World!");
   printf("Lowercase : %s\n", lower(str));
   strcpy(str, "Hello, World!");
   printf("Count of 'o' : %d\n", count(str, 'o'));
   strcpy(str, "Hello, World!");
   printf("Replace 'o' with '0' : %s\n", replace(str, 'o', '0'));
   strcpy(str, "Hello, World!");
   printf("Encrypt with key 3 : %s\n", encrypt(str, 3));
   strcpy(str, "Hello, World!");
   printf("Expand:\n%s\n", expand("Hello\nWorld\tHello, World!", result));
   printf("Compare 'Hello' with 'Hello': %d\n", compare("Hello", "Hello"));
   printf("Compare 'Hello' with 'World': %d\n", compare("Hello", "World"));
   return 0;
}

char *upper(char *s)
{
    char *p = s;
    while(*p)
    {
        *p = toupper((unsigned char) *p);
        p++;
    }
    return s;
}
char *lower(char *s)
{
    char *p = s;
    while(*p)
    {
        *p = tolower((unsigned char) *p);
        p++;
    }
    return s;
}
int count(char *s, char ch)
{
    int cnt = 0;
    while(*s)
    {
        if(*s == ch)
            cnt++;
        s++;
    }
    return cnt;
}
char *replace(char *s, char ch1, char ch2) 
{
    char *p = s;
    while (*p) 
    {
        if (*p == ch1) 
        {
            *p = ch2;
        }
        p++;
    }
    return s;
}
char *encrypt(char *s, int key)
{
    char *p = s;
    while(*p)
    {
        *p = *p + key;
        p++;
    }
    return s;
}
char *expand(char *s, char *t)
{
    char *pt = t;
    while(*s)
    {
        switch(*s)
        {
            case '\n' : 
                    *pt++ = '\n';
                    break;
            case '\t' :
                    *pt++ = '\t';
                    break;
            default :
                    *pt++ = *s;
                    break;
        }
        s++;
    }
    *pt = '\0';
    return t;
}
int compare(char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}