// 7. C program to Write and read employee information from a binary file (name and salary).
// It also displays the employee details having the maximum salary.
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[20];
    float sal;
};
int main()
{
    FILE *fp;
    struct employee emp[20], e;
    float maxSal = 0;
    int i, n;
    if((fp = fopen("employee.in", "wb")) == NULL)
    {
        printf("Error opening file");
        exit(0);
    }
    printf("\nHow many Employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the name and salary: \n");
        scanf("%s %f", e.name, &e.sal);
        fwrite(&e, sizeof(e), 1, fp);
    }
    fclose(fp);
    fp = fopen("employee.in", "rb");
    if(fp == NULL)
    {
        fprintf(stderr, "Error Opening file");
        exit(0);
    }
    if(fread(emp, sizeof(struct employee), n, fp) != n)
    {
        fprintf(stderr, "Error opening file");
        exit(0);
    }
    fclose(fp);
    for(i = 0; i < n; i++)
    {
        printf("\nName = %s Salaray = %f", emp[i].name, emp[i].sal);
        if(emp[i].sal > maxSal)
        {
            maxSal = emp[i].sal;
            e = emp[i];
        }
    }
    printf("\nThe Employee details having Maximm Salary is: ");
    printf("\nName = %s Salary = %f", e.name, e.sal);
    return 0;
}