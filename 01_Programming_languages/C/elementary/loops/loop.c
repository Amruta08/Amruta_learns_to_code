#include<stdio.h>

int main()
{
    int n  ;
    printf("enter:") ;
    scanf("%d" , &n);
    for( int i = 1 ; i <=n ; i++)
    {
        printf("%d\n",i);
      //printf("%d\n",&i); mistake made was printing &i instead of i
    }

    return 0 ;
}
