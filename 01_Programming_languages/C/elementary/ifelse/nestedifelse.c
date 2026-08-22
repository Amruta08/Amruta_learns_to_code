#include<stdio.h>

int main()
{   int a , b ;
    printf("enter 2 numbers :");
    scanf("%d %d", &a , &b);

    if (a>=b)
    {
        if(a > b)
        {
            printf("\n %d > %d" , a , b);
        }else{
            printf("\n%d = %d" , a , b);
        }
    }else{
        printf("\n%d > %d" , b , a);
    }
    return 0 ;
}