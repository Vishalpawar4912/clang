// 6. Illustrate pointer to a structure array.
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
} stu[4] = 
{
    "ABC",1,
    "DEF",2,
    "GHI",3,
    "JKL",4
};
int main()
{
    struct student *ptr = stu;
    for(int i = 0; i < 4; i++)
    {
        printf("At Adress %u : %s %d", ptr, ptr -> name, ptr -> rollno);
        ptr++;
    }
    return 0;
}