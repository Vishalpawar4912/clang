// 7. Write a C program to accept student information using structure (roll number, name, percentage) for n students. 
//    Display student details having highest percentage. And also display recors in descending order of percentage.
#include <stdio.h>
#include <string.h>
#define MAX 100
struct Student 
{
    int roll_no;
    char name[50];
    float perc;
};
void inputStudDetails(struct Student stud[], int n);
void dispStudWithHighPerc(struct Student stud[], int n);
void sortStudByPercDesc(struct Student stud[], int n);
void dispAllStud(struct Student stud[], int n);

int main() 
{
    int n;
    struct Student stud[MAX];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    inputStudDetails(stud, n);

    dispStudWithHighPerc(stud, n);

    sortStudByPercDesc(stud, n);

    printf("\nStudent records in descending order of percentage:\n");
    dispAllStud(stud, n);

    return 0;
}
void inputStudDetails(struct Student stud[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &stud[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", stud[i].name);
        printf("Enter Percentage: ");
        scanf("%f", &stud[i].perc);
    }
}
void dispStudWithHighPerc(struct Student stud[], int n) 
{
    int index = 0;  
    for (int i = 1; i < n; i++) 
    {
        if (stud[i].perc > stud[index].perc) 
        {
            index = i;
        }
    }

    printf("\nStudent with the highest percentage:\n");
    printf("Roll Number: %d\n", stud[index].roll_no);
    printf("Name: %s\n", stud[index].name);
    printf("Percentage: %.2f\n", stud[index].perc);
}
void sortStudByPercDesc(struct Student stud[], int n) 
{
    struct Student temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (stud[j].perc < stud[j + 1].perc) 
            {
                temp = stud[j];
                stud[j] = stud[j + 1];
                stud[j + 1] = temp;
            }
        }
    }
}
void dispAllStud(struct Student stud[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Roll Number: %d, Name: %s, Percentage: %.2f\n", 
                stud[i].roll_no, stud[i].name, stud[i].perc);
    }
}