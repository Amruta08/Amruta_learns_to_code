#include<stdio.h>
int main()
{  int i , j ;
   int sum = 0;
    printf("enter a number:");
   scanf("%d" ,&i);
   /*
   for ( j=1 ; j <= i ; j++)
   {
       sum = sum + j ;
   }
   */
  
  for ( j = i ; j >= 1 ; j--)
  {
      sum = sum + j ;
  }
  
   printf("%d",sum);


   
    return 0;
}