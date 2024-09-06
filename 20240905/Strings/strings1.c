// 1. Write a program that accepts a string and generates all its permutations. for ex., ABC, ACB, BAC, BCA, CAB, CBA.
#include<stdio.h>
int main()
{
    char str[10];
    void perm(char a[], int k, int n);
    printf("Enter the String: ");
    scanf("%s", &str);
    perm(str, 0, strlen(str));
}
void perm(char a[], int k, int n)
{
    int i;
    char t[20], ch;
    strcpy(t, a);
    if(k == (n - 1))
        puts(a);
    else
        for(i = k; i < n; i++)
        {
            ch = t[i];
            t[i] = t[k];
            t[k] = ch;
            perm(t, k + 1, n);
        }
}