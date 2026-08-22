#include<stdio.h>
int main()
{
    int n , i=2 , k=0 ;
    printf("enter number");
    scanf("%d" , &n);

    while (i<=n)
    {
        k++;
        if (k%i==0)
        {
           printf("%d" , i ) ;
        } 
      i++;
    }

    return 0;
    
}