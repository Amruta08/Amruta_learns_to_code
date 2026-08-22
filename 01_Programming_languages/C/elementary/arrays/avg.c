#include<stdio.h>
int main()
{
 int i , n  , sum = 0 ;
 float avg ;
 int marks[100] ;

printf("enter");
scanf("%d" , &n);
printf("enter");
for ( i = 0; i <= n-1 ; i++)
{
  scanf("%d" , &marks[i]);
}

/*
for ( i = 0; i <= n-1 ; i++)
{
  // sum of elements
  sum = sum + marks[i] ;
}
// average 
avg = sum/n ;
printf("%d\n" , sum) ;
printf("%f" , avg) ;
*/

//LARGEST
for ( i = 0; i <= n-1 ; i++)
{
  if (marks[0] < marks[i])
  {
      marks[0] = marks[i] ;
  }
  
}

printf("largest element %d" , marks[0]);

return 0 ;
}