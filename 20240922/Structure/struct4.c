// 4. Demonstrate passing a structure to a function.
#include<stdio.h>
#include<ctype.h>
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
    void display(struct student s);
    int i, sum = 0;
    printf("Enter the Student Name: ");
    gets(s.name);
    printf("Enter the Student Roll Number: ");
    scanf("%d", &s.rollno);
    printf("Enter the Marks of Six SUbjets: \n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &s.marks);
        sum = sum + s.marks[i];
    }
    s.percentage = sum / 6.0;
    display(s);
    return 0;
}
void display(struct student s)
{
    printf("\n--- Student Details ---\n");
    printf("\nNames : %s", s.name);
    printf("\nRoll Number : %d\n", s.rollno);
    printf("\nMarks : \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d\t", s.marks[i]);
    }
    printf("\nPercentage : %f", s.percentage);
}