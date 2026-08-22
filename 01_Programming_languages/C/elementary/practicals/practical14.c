#include<stdio.h>

void add(float a , float b);
void sub(float a , float b); 
void mul(float a , float b);                            
void div(float a , float b);  

int main()
{
    float n1,n2 ;
    printf("\nEnter first number:");
    scanf("%f", &n1);
    printf("\nEnter second number:");
    scanf("%f", &n2);
    add(n1,n2);  
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);
    return 0 ;
}

void add(float a , float b) 
{
    printf("addition of numbers is: %f\n" , a+b );
}

void sub(float a , float b) 
{
   float z ;
   if (a > b)
   {
       z = a - b ;
   }else
   {
      z = b - a ; 
   }
   printf("Difference is: %f\n" , z );
}

void mul(float a , float b) 
{
    printf("Product is: %f\n" , a*b );
}

void div(float a , float b) 
{
  float q ;
   if (a > b)
   {
       q = a/b ;
   }else
   {
       q = b/a ; 
   }
   printf("Division is: %f\n" , q );
}