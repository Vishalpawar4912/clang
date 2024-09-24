// 5. Write a C program to read names and addresses using a structure and rearrange the data in alphabetical order of names and display.
#include<stdio.h>
#include<string.h>
#define Max_Employees 100
#define Name_Len 100
#define Address_Len 200
struct Employee
{
    char name[Name_Len];
    char address[Address_Len];
};
int main()
{
    int n;
    struct Employee emp[Max_Employees];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        fgets(emp[i].name, Name_Len, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = 0;
        printf("Address: ");
        fgets(emp[i].address, Address_Len, stdin);
        emp[i].address[strcspn(emp[i].address, "\n")] = 0;
    }
    sortEmployees(emp, n);
    displayEmployees(emp, n);
    return 0;
}
void sortEmployees(struct Employee emp[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (strcmp(emp[i].name, emp[j].name) > 0) 
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}
void displayEmployees(struct Employee emp[], int n) 
{
    printf("\nSorted List of Employees:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Name: %s, Address: %s\n", emp[i].name, emp[i].address);
    }
}