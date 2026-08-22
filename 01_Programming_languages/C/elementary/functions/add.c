#include<stdio.h>

int add(int a , int b); //formal para //func dec
                        
int sub(int a , int b);
int mul(int a , int b);
int div(int a , int b);
int main()
{
    int a , b , sum , diff , multiplication , division;
    printf("\nEnter the value of a and b:");
    scanf("%d %d" , &a,&b);
    sum = add(a,b);  //actual par
    diff = sub(a ,b );
    multiplication = mul(a,b);
    division = div(a,b);
    printf("\nsum=%d" , sum);
    printf("\ndiff=%d" , diff);
    printf("\nmul=%d" , multiplication);
    printf("\ndiv=%d" , division);
    return 0 ;
}

int add(int a , int b) //func defination
{
    int c ;
    c = a + b ;
    return c ;
}

int sub(int a , int b) //func defination
{
    int c ;
    c = a - b ;
    return c ;
}

int mul(int a , int b) //func defination
{
    int c ;
    c = a*b ;
    return c ;
}

int div(int a , int b) //func defination
{
    int c ;
    c = a/b ;
    return c ;
}