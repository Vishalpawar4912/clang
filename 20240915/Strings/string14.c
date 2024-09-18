//14. Display Number in words. The same task can be done using another logic.
#include<stdio.h>
#include<conio.h>
void words(long, char);

char *one[] = {" "," one"," two"," three"," four"," five"," six"," seven"," eight"," nine"," ten"," eleven",
               " twelve"," thirteen"," fourteen"," fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};
char *ten[] = {" "," ten"," twenty"," thirty"," forty"," fifty"," sixty"," seventy"," eighty"," ninety"};

int main() 
{
    long n;
    printf("Enter any positive number: ");
    scanf("%ld", &n);
    if(n <= 0)
        printf("Enter numbers greater than 0");
    else 
    {
        words((n / 10000000), "crore");
        words(((n / 100000) % 100), "lakh");
        words(((n / 1000) % 100), "thousand");
        words(((n / 100) % 10), "hundred");
        words((n % 100), " ");
    }
    return 0;
}

void words(long n, char ch) 
{
    if (n > 19) 
    {
        printf("%s %s", ten[n / 10], one[n % 10]);
    } else 
    {
        printf("%s ", one[n]);
    }
    if(n) 
    {
        printf("%s ", ch);
    }
}