#include<stdio.h>


int main()
{
 int m[10][10] , n[10][10] , i , j  , p , q , k , a , sum =0 , sum1 = 0 ;
 printf(" enter rows ");
 scanf("%d" , &p);

 printf(" enter columms ");
 scanf("%d" , &q);


for(i=0;i<p;i++)
{  
    for( j = 0; j < q ; j++)
    {
       printf("enter value");
       scanf("%d",&m[i][j]); 
    }   
}

for(i=0;i<p;i++)
{  
    for( j = 0; j < q ; j++)
    {
       
       printf("%d ", m[i][j]); 
    }  
    printf("\n") ;
}

    for ( k = 0; k < p ; k++)
    {
      for( j = 0; j < p ; j++)
    {
       a =  m[k][j];
       sum = sum + a ;
    } 
    printf("sum of elemets of row %d is %d\n" , k+1 , sum);
    sum = 0;
    }

    for ( k = 0; k < q ; k++)
    {
      for( j = 0; j < q ; j++)
    {
       a =  m[j][k];
       sum1 = sum1 + a ;
    } 
    printf("sum of elements of column %d is %d\n" , k+1 , sum1);
    sum1 = 0 ;
    }
    
    
     
    printf("\n") ;




return 0 ;

}

 