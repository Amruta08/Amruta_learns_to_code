#include<stdio.h>
int main()
{ int i ;
    printf("enter a no:");
    scanf("%d",&i);

    if (i % 2 == 1)
    {
        printf("%d is odd" , i) ;
    }else
    {
      printf("%d is even" , i) ;
    }
    
    return 0 ;
    
}