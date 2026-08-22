#include<stdio.h>
int main()
{
    int a , b ;
    int fact = 1 ;
    printf("enter a number: ");
    scanf("%d",&a);
    for ( b = 1 ; b <= a; b++)
    {
        fact*=b;
    }

    printf("%d" , fact);
    return 0 ;
}
    