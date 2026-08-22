#include <stdio.h>
int main() {
   int r , s , c1 , c2 , n , k;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (r = 1; r <= n; r++) {
      for (s = 1; s <=n -r; s++) {
         printf(" ");
      }
      for (c1 = 1; c1 <= r; c1++) {
         printf("%d" , c1);
      }
       k = r-1;
      for (c2 = 1; c2 <= r-1; c2++) {
         printf("%d" , k--);
      }

      printf("\n");
   }

   for (r = n - 1; r >= 1; r--) {
      for (s = 1; s <=n -r; s++) {
         printf(" ");
      }
      for (c1 = 1; c1 <= r; c1++) {
         printf("%d" , c1);
      }
       k = r-1;
      for (c2 = 1; c2 <= r-1; c2++) {
         printf("%d" , k--);
      }

      printf("\n");
   }
   return 0;
}