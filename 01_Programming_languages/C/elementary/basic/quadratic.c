#include<stdio.h>
#include<math.h>

int main()
{   
    double a , b , c , D  , Root1 , Root2 ;
    printf("enter:\n");
    scanf("%lf %lf %lf" , &a , &b , &c );

    D = (b*b) - 4*a*c ;

    Root1 = (-b + sqrt(D)) / 2*a ;
    Root2 = (-b - sqrt(D)) / 2*a ;

    printf(" roots : %lf %lf " , Root1 , Root2 );


    return 0 ;
}