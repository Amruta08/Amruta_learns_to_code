#include<stdio.h>
int main()
{  int i , j ;
   int sum = 0;
    printf("enter a number:");
    scanf("%d" ,&i);
for ( j = i ; j >= 1 ; j--)
  {
     // sum = sum + j*j ;
     sum = sum + 1/j ;
  }
printf("%d",sum);
return 0;
}