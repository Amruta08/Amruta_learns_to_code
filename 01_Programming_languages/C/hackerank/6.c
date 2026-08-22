#include<stdio.h>

int main()
{   
    int n , sum = 0 , q ;
    printf("enter a number:");
    scanf("%d" , &n);
    
    
   while (n!= 0)
    {
        q = n%10 ;
        sum = sum + q ;
        n = n/10 ;
    } 
    printf("%d",sum);

    return 0;
}