// 1. Write a C program to store information of an employee with following attributes:
//     Name, basic, da, hra, gross, ptax, itax, net.
//     Where   da = 50% of basic
//             hra = 15% of basic + da
//             ptax = 5% of basic + da
//             itax = 5% of basic + da
#include<stdio.h>
struct Employee
{
    char name[100];
    float basic, da, hra, gross, ptax, itax, net;
};
int main()
{
    struct Employee emp;
    printf("Enter Employee Name: ");
    fgets(emp.name, 100, stdin);
    printf("Enter basic salary: ");
    scanf("%f", &emp.basic);
    emp.da = 0.50 * emp.basic;
    emp.hra = 0.15 * emp.basic + emp.da;
    emp.ptax = 0.05 * (emp.basic + emp.da);
    emp.itax = 0.05 * (emp.basic + emp.da);
    emp.gross = emp.basic + emp.da + emp.hra;
    emp.net = emp.gross - emp.ptax - emp.itax;
    printf("\nEmployee Name: %s", emp.name);
    printf("Basic Salary: %.2f\n", emp.basic);
    printf("DA: %.2f\n", emp.da);
    printf("HRA: %.2f\n", emp.hra);
    printf("Gross Salary: %.2f\n", emp.gross);
    printf("Professional Tax: %.2f\n", emp.ptax);
    printf("Income Tax: %.2f\n", emp.itax);
    printf("Net Salary: %.2f\n", emp.net);
    return 0;
}