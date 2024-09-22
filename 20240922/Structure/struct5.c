// 5. Write a C program to store student information of n students and display the information in descending order of total marks.
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks[6];
    float percentage;
};
int main()
{
    int n;
    struct student s[20];
    void acceptdetails(struct student s[], int n);
    void displaydetails(struct student s[], int n);
    void sortdetails(struct student s[], int n);
    printf("How Many Students: ");
    scanf("%d", &n);
    acceptdetails(s, n);
    sortdetails(s, n);
    displaydetails(s, n);
    return 0;
}
void acceptdetails(struct student s[20], int n)
{
    int i, j, sum;
    for(i = 0; i < n; i++)
    {
        printf("Enter the Name, Rollno, and Marks of Six Subjects: \n");
        gets(s[i].name);
        scanf("%d", &s[i].rollno);
        sum = 0;
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &s[i].marks);
            sum = sum + s[i].marks;
        }
        s[i].percentage = sum / 6.0;
    }
}
void sortdetails(struct student s[20], int n)
{
    int i, j, pass;
    struct student temp;
    for(pass = 1; pass <= n - 1; pass++)
    {
        for(i = 0; i < n - pass - 1; i++)
        {
            if(s[i].percentage > s[i + 1].percentage)
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = s[i];
            }
        }
    }
}
void displaydetails(struct student s[20], int n)
{
    int i;
    printf("\n Name Rollno Percentage \n");
    for(i = 0; i < n; i++)
    {
        printf("\n%s %d %f\n", s[i].name, s[i].rollno, s[i].percentage);
    }
}