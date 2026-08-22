#include<stdio.h>
int main()
{  float i , j  , fact = 1;
   float sum = 0;
    printf("enter a number:");
    scanf("%f" ,&i);
for ( j = i ; j >= 1 ; j--)
  {
     //sum = sum + 1/j ;
     sum = sum + 1/fact ;
     fact = fact*j ;
     
  }
printf("%f",sum);
return 0;
}