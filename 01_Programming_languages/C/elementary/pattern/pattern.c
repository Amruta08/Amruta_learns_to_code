#include <stdio.h>
int main() {
   char  j;
   int rows , i ;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
         printf("%c ", j);
      }
      printf("\n");
   }
   return 0;
}