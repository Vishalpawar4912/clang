//6.Write a C program to find the Armstrong number for a given range of number.
#include <stdio.h> 
int main(){
    int num, r, sum, temp;
    int strno, endno;
    printf("Input starting number of range: "); 
    scanf("%d", &strno);
    printf("Input ending number of range : "); 
    scanf("%d", &endno); 
    printf("Armstrong numbers in given range are: ");
    num = strno;
    do
    {
        temp = num; 
        sum = 0;
        while(temp != 0)
        { 
            r = temp % 10; 
            temp = temp / 10; 
            sum = sum + (r * r * r); 
        }
        if(sum == num) 
            printf("%d ", num);
        num++;
    } while (num <= endno);
    printf("\n"); 
    return 0;
}

