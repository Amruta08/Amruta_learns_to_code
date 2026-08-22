#include<stdio.h>

int prime(int n);

void main()
{
    int n , flag = 1  ;
    printf("enter value of no. ");
    scanf("%d" , &n);
    for (int i = 2; i < n; i++)
    {
      if (prime(i)==1)
      {
         if (prime(n-i)==1)
         {
             printf("%d + %d = %d\n",i,n-i,n);
            flag = 0; 
         }
      } 
    }
    if (flag==1)
    {
        printf("can't be expressesd");
    } 
}

int prime(int n)
{
    int i, flag = 1;
    for ( i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag = 0 ;
            break;
        } 
    } 
    return flag;
    
}

/* n = x + y ; where x , y are prime no.
   eg :- 34;
   for i = 2 to 34 ;
   i = 3 , 34-3 = 31 , 31 is prime;
   similary for i = 5 , 7 ...;
*/