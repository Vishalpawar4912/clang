// 7. Write a C program to create a structure 'Student' containing, rollno name and percentage of marks. 
// Read information of 'n' students and display records in descending order of percentage of marks.
#include<stdio.h>
struct stud
{
    int rollno;
    char name[25];
    int perc;
};
int main()
{
    struct stud s[10];
    int n, i, j, temp;
    char tempstr[25];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter Roll NUmber, Name and Percentage of Student #%d: \n", i + 1);
        scanf("%d %s %d", &s[i].rollno, &s[i].name, &s[i].perc);
    }
    printf("\nStudent Records: ");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent #%d : ", i + 1);
        printf("\nRoll No : %d", s[i].rollno);
        printf("\nName : %s", s[i].name);
        printf("\nPercentage : %d\n", s[i].perc);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(s[j].perc < s[j + 1].perc)
            {
                temp = s[j].rollno;
                s[j].rollno = s[j + 1].rollno;
                s[j + 1].rollno = temp;
                temp = s[j].perc;
                s[j].perc = s[j + 1].perc;
                s[j + 1].perc = temp;
                strcpy(tempstr, s[j].name);
                strcpy(s[j].name, s[j + 1].name);
                strcpy(s[j + 1].name, tempstr);
            }
        }
    }
    printf("\nStudent Records in Descending Order of Percentage: ");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent #%d : ", i + 1);
        printf("\nRoll No : %d", s[i].rollno);
        printf("\nName : %s", s[i].name);
        printf("\nPercentage : %d\n", s[i].perc);
    }
    return 0;
}