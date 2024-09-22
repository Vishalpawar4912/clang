// 3. C Program to accept details for n students using structure and display the student details having the maximum percentage.
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
    int i, sum, n, j;
    struct student stud[10], temp;
    float max;
    printf("Enter the Details of the 10 Students: \n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter the Name and Roll Number: \n");
        scanf("%s %d", &stud[i].name, &stud[i].rollno);
        printf("Enter Marks for Six Subjects: \n");
        sum = 0;
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &stud[i].marks[j]);
            sum = sum + stud[i].marks[j];
        }
        stud[i].percentage = (float) sum / 6;
    }
    max = stud[0].percentage;
    for(i = 1; i < n; i++)
    {
        if(stud[i].percentage > max)
        {
            max = stud[i].percentage;
            temp = stud[i];
        }
        printf("Student Having Maximum Percentage: \n");
        printf("%s %d %f\n", temp.name, temp.rollno, temp.percentage);
    }
    return 0;
}