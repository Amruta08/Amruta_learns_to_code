#include<stdio.h>
int isprime(int no);

int main()
{
    int no , flag ;
    printf("enter the number");
    scanf("%d" , &no);
    flag = isprime(no);
    if (flag==0)
    {
        printf("number is prime");
    }
    else
    {
       printf("number is not prime") ;
    }
    
    return 0 ;
}

int isprime(int no)
{
    int i ;
    for ( i = 2; i < no/2; i++)
    {
        if (no%i==0)
        {
            return 1 ;
        }
        
    }
    return 0 ; 
}