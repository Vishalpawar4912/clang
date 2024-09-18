//6. To Convert decimal number to binary.
#include<stdio.h>
int main()
{
    unsigned int decn, rem[16];
    int i;
    //initialize remainder array
    for(i = 0; i < 16; i++)
        rem[i] = 0;
    printf("Enter the Decimal Number: ");
    scanf("%u", &decn);
    i = 0;  // set i to 0th element of remainder array
    // divide number successively by 2
    while(decn > 0)
    {
        rem[i] = decn % 2;
        i++;
        decn = decn / 2;
    }
    // display remainder array in reverse order
    printf("The Binary equivalent is: \n");
    for(i = 15; i >= 0; i--)
    printf("%d", rem[i]);
}