#include<stdio.h>

int prime(int n);

void main()
{
    int n , flag = 0 ;
    printf("enter value of N ");
    scanf("%d" , &n);
    flag = prime(n);
    if (flag ==1)
    {
        printf(" number is not prime");
    }else
    {
        printf(" number is prime");
    }
    
}

int prime(int n)
{
    int i ;
    for ( i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return 1 ;
        }
        else
        {
            return 0;
        }
        
    }
    
}