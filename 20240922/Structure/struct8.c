// 8. Write a C program for creating a structure employee with eno, ename and salary.
// Accept details of n employees and display records in descending order of salary.
#include<stdio.h>
#include<conio.h>
struct emp
{
    int eno;
    char ename[10];
    int salary;
};
int main()
{
    struct emp e[10];
    char t[10];
    int n, i, j, temp;
    printf("How Many Records: ");
    scanf("%d", &n);
    printf("Enter the Records: \n");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee Number, Name and Salary: \n");
        scanf("%d %s %d\n", &e[i].eno, &e[i].ename, &e[i].salary);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(e[i].salary < e[j].salary)
            {
                temp = e[i].eno;
                e[i].eno = e[j].eno;
                e[j].eno = temp;
                strcpy(t, e[i].ename);
                strcpy(e[i].ename, e[j].ename);
                strcpy(e[j].ename, t);
                temp = e[i].salary;
                e[i].salary = e[j].salary;
                e[j].salary = temp;
            }
        }
    }
    printf("\nEmployee Records in Descending Order of Salary are : \n");
    for(i = 0; i < n; i++)
    {
        printf("\n%3d %12s %6d", e[i].eno, e[i].ename, e[i].salary);
    }
    return 0;
}