#include<stdio.h>
int main()
{ int i , j ;
    printf("enter a no:");
    scanf("%d",&i);
    for ( j = 1; j < i  ; j++)
    {
        if (j % 2 == 1)
        {
            printf("%d" , j) ;
        }
        
        
    }
    return 0 ;
    
}