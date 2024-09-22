// 1. C Program to accept details of one student using structure and display the student result.
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
    struct student s;
    int i, sum = 0;
    printf("Enter the Student Name: \n");
    gets(s.name);
    printf("Enter the Student Roll Number: \n");
    scanf("%d", &s.rollno);
    printf("Enter the Marks of 6 Subjects: \n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &s.marks[i]);
        sum = sum + s.marks[i];
    }
    s.percentage = sum / 6.0;
    printf("\n--- Student Details ---\n");
    printf("\nName : %s", s.name);
    printf("\nRoll Number : %d\n", s.rollno);
    printf("\nMarks : ");
    for(i = 0; i < 6; i++)
    {
        printf("%d\t", s.marks[i]);
    }
    printf("\nPercentage : %f", s.percentage);
    return 0;
}