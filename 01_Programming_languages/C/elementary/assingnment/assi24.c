#include <stdio.h>
 
int main()
{
  int i , n , Number = 1, sum = 0 , count;

  printf("enter a number");
 scanf("%d" , &n); 
  
  printf("sum of Prime Number from 1 to %d are: \n" , n ); 
  while(Number <= n)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && Number != 1 )
    {
	 sum = sum + Number ;
    }
    Number++; 
  }

  printf("%d" , sum);
  return 0;
}