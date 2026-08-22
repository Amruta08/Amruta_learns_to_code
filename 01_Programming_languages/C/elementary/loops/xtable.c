#include<stdio.h>
int main()
{ int i , j ;
    printf("enter a no:");
    scanf("%d",&i);
    for ( j = 1; j < 101 ; j++)
    {
        printf("%d x %d = %d\n" , j , i , i*j );
    }
    return 0 ;
    
}