//5. Write a program in C to make a pyramid pattern with numbers increased by 1.
#include <stdio.h> 
int main() {
   int i = 1, j, spc, rows, k, t = 1;  
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
         printf("%d ", t++);  
      }
      printf("\n"); 
      spc--; 
      i++;
    }
   return 0;
}
