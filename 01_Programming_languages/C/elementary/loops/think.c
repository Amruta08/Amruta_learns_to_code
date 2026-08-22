#include<stdio.h>
int main()
{  int n;
 printf("enter a number:");
 scanf("%d",&n);
 //n%2==0?printf("even no"):printf("odd no");
 
    if(n%2==0)
 {
    printf("even no");
 } else{
     printf("odd no");
 } 
    return 0;
}