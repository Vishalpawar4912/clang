// 2. Write a C program to accept student data_name, roll numbers and marks of 3 subjects. 
//    Calculate the total and arrange these records in descending order of marks.
#include<stdio.h>
#include<string.h>
struct Student
{
    char name[100];
    int rollno;
    float marks1, marks2, marks3, total;
};
int main()
{
    int n, i, j;
    struct Student Stud[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        getchar(); 
        printf("Enter Name: ");
        fgets(Stud[i].name, 100, stdin);
        Stud[i].name[strcspn(Stud[i].name, "\n")] = 0;
        printf("Enter Roll Number: ");
        scanf("%d", &Stud[i].rollno);
        printf("Enter Marks of Subject 1: ");
        scanf("%f", &Stud[i].marks1);
        printf("Enter Marks of Subject 2: ");
        scanf("%f", &Stud[i].marks2);
        printf("Enter Marks of Subject 3: ");
        scanf("%f", &Stud[i].marks3);
        Stud[i].total = Stud[i].marks1 + Stud[i].marks2 + Stud[i].marks3;
    }
    for(i = 0; i < n - 1; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(Stud[i].total < Stud[j].total) 
            {
                struct Student temp = Stud[i];
                Stud[i] = Stud[j];
                Stud[j] = temp;
            }
        }
    }
    printf("\nSorted Student Records:\n");
    for(i = 0; i < n; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", Stud[i].name);
        printf("Roll Number: %d\n", Stud[i].rollno);
        printf("Marks 1: %.2f\n", Stud[i].marks1);
        printf("Marks 2: %.2f\n", Stud[i].marks2);
        printf("Marks 3: %.2f\n", Stud[i].marks3);
        printf("Total Marks: %.2f\n", Stud[i].total);
    }
    return 0;
}