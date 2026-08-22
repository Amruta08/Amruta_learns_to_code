#include<stdio.h>
#include<math.h>

 int power(int a , int n)
 {
     if (n==1){
        return a;
     }else{
        return(a*power(a,n-1));
     }
 }
 
void main()
{
  int a , n , p ;
  printf("enter no. and its power");
  scanf("%d%d",&a,&n);
  p = power(a , n);
  printf("power is %d",p);

}
