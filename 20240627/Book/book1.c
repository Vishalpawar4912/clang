
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the Number Between 1 and 3 :");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            puts("you entered 1");
            break;
        case 2:
            puts("you entered 2");
            break;
        case 3:
            puts("you entered 3");
            break;
        default:
            puts("out of range");
            break;
    }

}