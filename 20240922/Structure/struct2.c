// 2. C Program to accept details for 10 students using structure and display the studenrs having percentage > 70%.
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
    int i, sum, j, n;
    struct student stud[10];
    printf("How Many Students: ");
    scanf("%d", &n);
    printf("Enter the Details of n Students: \n");
    for(i = 0; i < n; i++)
    {
        printf("Enter the Name and Roll Number: \n");
        scanf("%s %d", stud[i].name, &stud[i].rollno);
        printf("Enter Marks for Six Subjects: \n");
        sum = 0;
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &stud[i].marks[j]);
            sum = sum + stud[i].marks[j];
        }
        stud[i].percentage = (float) sum / 6;
    }
    printf("\nName \t Rollno \t Percentage: \n");
    for(i = 0; i < 10; i++)
    {
        if(stud[i].percentage >= 70)
            {
                printf("%s %d %f \n", stud[i].name, stud[i].rollno, stud[i].percentage);
            }
    }
    return 0;
}