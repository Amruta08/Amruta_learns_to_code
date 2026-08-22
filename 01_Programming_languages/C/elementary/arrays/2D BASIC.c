#include<stdio.h>


int main()
{
 int m[10][10] , n[10][10] , i , j  , p , q ;
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

return 0 ;

}

 