#include<stdio.h>

int main()
{   
    int n , sum = 0 , q ;
    printf("enter a number:");
    scanf("%d" , &n);
    int n1 = n ;
    
    do
    {
        q = n%10 ;
        sum = sum + q*q*q ;
        n = n/10 ;
        
    } while (n!= 0);
    
    if(sum == n1)
         printf("armstrong");
     else
         printf("not armstrong"); 
    
    return 0 ;
}