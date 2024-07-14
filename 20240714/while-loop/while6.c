//6. Write a C program to make such a pattern as a pyramid with an asterisk.
#include <stdio.h>  
int main() {
   int i = 1, j, spc, rows, k;  
   printf("Input number of rows : "); 
   scanf("%d", &rows);  
   spc = rows + 4 - 1;  
    while (i <= rows)
    {
      for (k = spc; k >= 1; k--) 
      { 
         printf(" ");
      }
      for (j = 1; j <= i; j++) 
      {  
         printf("* "); 
      }
      printf("\n"); 
      spc--; 
      i++;
    }
   return 0;
}
