//13. Display a number in words. for ex., 6719 will be displayed as Six Thousand Seven Hundred Nineteen.
#include<stdio.h>
#include<conio.h>

    char *str1[] = {" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven",
        "Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Nineteen"};
    char *str2[] = {" ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    words(num);
    return 0;
}
void words(int num)
{
    int q;
    if(num <= 19)
        printf(" %s ", str1[num]);
    else
        if(num < 100)
        {
            q = num / 10;
            printf(" %s ", str2[q]);
            words(num % 10);
        }
        else
        {
            if(num < 1000)
            {
                q = num / 100;
                words(q);
                num = num % 100;
                printf(" Hundread ");
                words(num);
            }
            else
            {
                q = num / 1000;
                words(q);
                num = num % 1000;
                printf(" Thousand ");
                words(num);
            }
        }
}