#include<stdio.h>
int gcd(int a , int b);
   
   int gcd(int a , int b){
       int rem ;
       rem = a%b;
       if (rem==0)
       {
         return b;
       }else
       {
         return(gcd(b,rem));
       }
   }
int main()
{
  int a , b , p ;
  printf("enter 2 no.");
  scanf("%d%d",&a,&b);
  p = gcd(a , b);
  printf("gcd is %d",p);


    return 0 ;
}