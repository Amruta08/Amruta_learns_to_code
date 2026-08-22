#include<stdio.h>

 int fact(int n)
 {
     if (n==0){
        return 1;
     }else{
        return(n*fact(n-1));
     }
 }
 
void main()
{
  int a , fac ;
  printf("enter no. to find its factorial:");
  scanf("%d",&a);
  fac = fact(a);
  printf("factorial is %d",fac);

}
