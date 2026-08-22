#include<stdio.h>

int main()
{
    int n , n1 , count1 , rem ;
    int result = 0 , mul = 1 ,count = 0 ;
    printf("enter a number:");
    scanf("%d" , &n1);
    n  = n1 ;

    // find number of digits
     while(n!= 0)
     {
         n = n/10 ;
         count ++ ;
     }
     count1 = count ;
     n = n1 ;

    // multiply each digit n times 
    // and add them
     while(n!=0)
     {
         rem = n%10 ;
         while(count1 != 0)
         {
             mul = rem*mul ;
             count1-- ;
         }
         result =  result + mul ;
         count1 = count ;
         n = n / 10 ;
         mul = 1 ;    
     }

     if(result == n1)
         printf("armstrong");
     else
         printf("not armstrong");   
    return 0 ;
}