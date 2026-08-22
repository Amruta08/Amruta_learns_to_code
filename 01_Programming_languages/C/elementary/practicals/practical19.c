#include<stdio.h>
void swap(int *pa , int *pb);
int main()
{
    int a , b;
    printf("Enter value of a and b");
    scanf("%d%d" ,&a , &b );
    printf("Before swapping a and b \na=%d\nb=%d" , a , b);
    swap(&a,&b);
    printf("\nAfter Swapping a and b \na=%d\nb=%d" , a , b);


    return 0 ;
}

void swap(int *pa , int *pb){
    int t ;
    t = *pa;
    *pa = *pb ;
    *pb = t ;
}