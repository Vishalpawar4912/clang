// 4. Write a program to accept a sentence, seperate out the words and display the words in the alphabetical order.
//     Eg.,        This is a string
//     Output      a
//                 is
//                 string
//                 This
#include<stdio.h>
#include<string.h>
#define MAX 100
#define WORDS 50
int main()
{
    char sentence[MAX];
    char words[WORDS][MAX];
    int cnt = 0;
    printf("Enter the Sentence : ");
    fgets(sentence, MAX, stdin);
    char* token = strtok(sentence, " \n");
    while(token != NULL)
    {
        strcpy(words[cnt++], token);
        token = strtok(NULL, " \n");
    }
    sortWords(words, cnt);
    printf("Sorted Words: \n");
    for(int i = 0; i < cnt; i++)
    {
        printf("%s\n", words[i]);
    }
    return 0;
}
void swap(char* str1, char* str2)
{
    char temp[MAX];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void sortWords(char words[][MAX], int cnt)
{
    for(int i = 0; i < cnt - 1; i++)
    {
        for(int j = i + 1; j < cnt; j++)
        {
            if(strcasecmp(words[i], words[j]) > 0)
            {
                swap(words[i], words[j]);
            }
        }
    }
}