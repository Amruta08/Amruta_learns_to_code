#include<stdio.h>

int main()
{
 int m[15][15]  , c[15][15] , i , j  , p , q ;
 printf(" enter rows ");
 scanf("%d" , &p);

 printf(" enter columns ");
 scanf("%d" , &q);

// input elements of matrix
 for(i=0;i<p;i++)
{  
    for(j=0;j<q;j++)
    {
       printf("enter value");
       scanf("%d",&m[i][j]); 
    } 
}

//display matrix 
for(i=0;i<p;i++)
{  
    for(j=0;j<q;j++)
    {
       printf("%d\t",m[i][j]); 
    } 
    printf("\n");
} 
printf("\n");

//diaplay transpose
for(i=0;i<q;i++)
{  
    for(j=0;j<p;j++)
    {
       
       c[i][j] = m[j][i];

       printf("%d\t",c[i][j]); 
    }  
    printf("\n") ;
}
return 0 ;

}