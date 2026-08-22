#include<stdio.h>
void swap(int a , int b);
void main()

{
    int a = 100 , b= 200;
    printf("%d\n" , a);
    printf("%d\n" , b);

    swap(a,b);
    printf("%d\n" , a);
    printf("%d\n" , b);

}

void swap(int a , int b)
{ 
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}