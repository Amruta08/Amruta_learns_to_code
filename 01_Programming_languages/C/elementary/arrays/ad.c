#include<stdio.h>

int main()
{
 int m[10][10] , n[10][10] , c[10][10] , i , j  , p , q ;
 printf(" enter p ");
 scanf("%d" , &p);

 printf(" enter q ");
 scanf("%d" , &q);

 for(i=0;i<p;i++)
{  
    for(j=0;j<q;j++)
    {
       printf("enter value");
       scanf("%d",&m[i][j]); 
    } 
} 

for(i=0;i<p;i++)
{  
    for(j=0;j<q;j++)
    {
       printf("%d\t",m[i][j]); 
    } 
    printf("\n");
} 
/*
for(i=0;i<p;i++)
{  
    for(j=0;j<q;j++)
    {
       printf("enter value");
       scanf("%d",&n[i][j]); 
    }   
*/
printf("\n");
for(i=0;i<q;i++)
{  
    for(j=0;j<p;j++)
    {
       //c[i][j] = m[i][j] + n[i][j] ;
       c[i][j] = m[j][i];

       printf("%d\t",c[i][j]); 
    }  
    printf("\n") ;
}

return 0 ;

}