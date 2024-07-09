#include<stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter the values of a, b, c :");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) {
        max = a;
    } else if(b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    printf("%d is Maximum Number", max);

    return 0;
}
