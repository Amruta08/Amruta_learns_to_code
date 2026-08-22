#include<stdio.h>
#include<math.h>

int main()
{
    double i = 0  , n , sum = 0 ;
    double d ;
    printf("enter a no .:");
    scanf("%lf", &n ) ;
    //hk
    while (i <= n) {
      d = pow(3,i) ;
      sum = sum + d ;
       i = i+1 ;
    }

    printf("\n\n%lf" , sum);

    return 0 ;
    
}