#include<stdio.h>
int main()
{
 int i , sum = 0 , a[5] ;
 float avg ;

printf("enter 5 array elements:\n");
for ( i = 0; i < 5 ; i++)
{
  scanf("%d" , &a[i]);
}

for ( i = 0; i < 5 ; i++)
{
  sum = sum + a[i] ;
}

printf("Sum of all array elements is: ");
printf("%d\n" ,sum) ;
avg = (sum/5)*1.0 ;
printf("Average of all array elements is: ") ;
printf("%f" , avg) ;
return 0 ;
}