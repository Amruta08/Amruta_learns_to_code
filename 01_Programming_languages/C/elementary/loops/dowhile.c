#include<stdio.h>

int main()
{  
    float num;
    int sum = 0 ;

    do
    {
        printf("enter a number: ");
        scanf("%f",&num);
        sum += num ;
    } while (num != 0);

    printf("sum = %d",sum);
    
   
    return 0 ;
}