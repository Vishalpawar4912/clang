// 4. Write a C program to store information about n employees. The details are:
//     name, emp_id, designation(M-Manager, D-Director, W-Worker), details (for director-year of experience, for manager-name of the department, 
//     for worker-his specialization viz, electrician, mechanic, draftsman, etc).
//     Use menu to display details of:
//     1. All directors    2. All managers     3. All workers
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[100];
    int emp_id;
    char designation;
    union {
        int years_of_exp;
        char department[100];
        char specialization[100];
    } details;
};
void dispDirectors(struct Employee emp[], int n);
void dispManagers(struct Employee emp[], int n);
void dispWorkers(struct Employee emp[], int n);
int main() 
{
    int n, i, ch;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for(i = 0; i < n; i++) 
    {
        getchar();
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        fgets(emp[i].name, 100, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = 0;
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        getchar();
        printf("Designation (M-Manager, D-Director, W-Worker): ");
        scanf("%c", &emp[i].designation);
        getchar();
        switch(emp[i].designation) 
        {
            case 'D': case 'd':
                printf("Years of Experience (Director): ");
                scanf("%d", &emp[i].details.years_of_exp);
                getchar();
                break;
            case 'M': case 'm':
                printf("Department (Manager): ");
                fgets(emp[i].details.department, 100, stdin);
                emp[i].details.department[strcspn(emp[i].details.department, "\n")] = 0; 
            case 'W': case 'w':
                printf("Specialization (Worker): ");
                fgets(emp[i].details.specialization, 100, stdin);
                emp[i].details.specialization[strcspn(emp[i].details.specialization, "\n")] = 0;
                break;
            default:
                printf("Invalid designation! Please re-enter employee %d details.\n", i + 1);
                i--; 
                break;
        }
    }
    do {
        printf("\nMenu:\n");
        printf("1. Display all Directors\n");
        printf("2. Display all Managers\n");
        printf("3. Display all Workers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) 
        {
            case 1:
                dispDirectors(emp, n);
                break;
            case 2:
                dispManagers(emp, n);
                break;
            case 3:
                dispWorkers(emp, n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch != 4);
    return 0;
}
void dispDirectors(struct Employee emp[], int n) 
{
    int found = 0;
    printf("\nList of Directors:\n");
    for (int i = 0; i < n; i++) 
    {
        if (emp[i].designation == 'D' || emp[i].designation == 'd') 
        {
            printf("Name: %s, Employee ID: %d, Years of Experience: %d\n",
                   emp[i].name, emp[i].emp_id, emp[i].details.years_of_exp);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No Directors found.\n");
    }
}
void dispManagers(struct Employee emp[], int n) 
{
    int found = 0;
    printf("\nList of Managers:\n");
    for (int i = 0; i < n; i++) 
    {
        if (emp[i].designation == 'M' || emp[i].designation == 'm') 
        {
            printf("Name: %s, Employee ID: %d, Department: %s\n",
                   emp[i].name, emp[i].emp_id, emp[i].details.department);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No Managers found.\n");
    }
}
void dispWorkers(struct Employee emp[], int n) 
{
    int found = 0;
    printf("\nList of Workers:\n");    
    for (int i = 0; i < n; i++) 
    {
        if (emp[i].designation == 'W' || emp[i].designation == 'w') 
        {
            printf("Name: %s, Employee ID: %d, Specialization: %s\n",
                   emp[i].name, emp[i].emp_id, emp[i].details.specialization);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No Workers found.\n");
    }
}