#include<stdio.h>
int main()
{
  int n , i , m ,q ,a[100] ;
  printf("enter number of elements in array");
  scanf("%d" , &n);
  printf("enter  elements of array:\n");

  for ( i = 0; i < n; i++)
  {
      scanf("%d" , &a[i]);
  }

  m = a[0];

  for ( i = 1; i < n; i++)
  {
      if (m<a[i])
      {
          m = a[i];
      }
      
  }

  q = a[0];

  for ( i = 1; i < n; i++)
  {
      if (a[i]<q)
      {
          q = a[i];
      }
      
  }

  printf("largest number in the array is %d\n",m);
  printf("smallest number in the array is %d",q);
  
  
  return 0 ;
}