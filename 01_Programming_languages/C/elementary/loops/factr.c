#include<stdio.h>
int main()
{  float i , n , fact = 1 ;
   float sum = 0;
    printf("enter a number:");
    scanf("%f" ,&n);
for (i=1 ; i<=n ;  i ++)
  { 
    fact*=i;
     sum = sum + 1/fact ;
  }
printf("%f",sum);
return 0;
}