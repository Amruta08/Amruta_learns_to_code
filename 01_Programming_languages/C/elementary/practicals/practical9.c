#include<stdio.h>
int main()
{
    int  a[15] ;
    int n  , i , j , temp ;
    printf("enter the values of n less than 15");
    scanf("%d" , &n);
    printf("enter the elements of array");

    for ( i = 0 ; i < n  ; i++)
    {
        scanf("%d" , &a[i]);
    }

    for ( i = 0; i < n; i++)
    {
      for ( j = 1; j < n ; j++)
    {
        if (a[j-1] > a[j])
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp ;
        }   
    }
    }
    
    printf("After sorting\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n" ,a[i] );
    }
    
    return 0 ;
}