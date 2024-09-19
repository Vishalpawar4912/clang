// 3. Accept a string and display it in the following forms :
//     If string is ABCDE , the Output should be, 
//     ABCDE   BCDEA   CDEAB   DEABC   EABCD   ABCDE
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s", str);
    displayRotations(str);
    return 0;
}
void displayRotations(char *str)
{
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        printf("%s", str + i);
        for(int j = 0; j < i; j++)
        {
             printf("%c", str[j]);
        }
        printf("\n");
    }
}