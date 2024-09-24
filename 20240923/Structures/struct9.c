// 9. Write a C program for creating a structure employee with eno, ename, salary.
// Accept details of n employees and display records in descending order of salary.
#include<stdio.h>
#include<string.h>
struct Employee 
{
    int eno;
    char ename[50];
    float salary;
};
void inputEmpDetails(struct Employee emp[], int n);
void sortEmpBySalaryDesc(struct Employee emp[], int n);
void dispEmpDetails(struct Employee emp[], int n);
int main() 
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    inputEmpDetails(emp, n);
    sortEmpBySalaryDesc(emp, n);
    printf("\nEmployee records in descending order of salary:\n");
    dispEmpDetails(emp, n);
    return 0;
}
void inputEmpDetails(struct Employee emp[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
}
void sortEmpBySalaryDesc(struct Employee emp[], int n) 
{
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (emp[j].salary < emp[j + 1].salary) 
            {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}
void dispEmpDetails(struct Employee emp[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Employee Number: %d\n", emp[i].eno);
        printf("Employee Name: %s\n", emp[i].ename);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}