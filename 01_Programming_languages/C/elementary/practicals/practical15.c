#include<stdio.h>
void add(int a[15][15] , int b[15][15] , int m , int n);

int main()
{
 int a[15][15] , b[15][15] , i , j  , m , n ;
 printf("Enter row and column values ");
 scanf("%d %d" , &m , &n);

 printf("Enter value of matrix A\n");
 for(i=0;i<m;i++)
{  
    for(j=0;j<n;j++)
    {
       scanf("%d",&a[i][j]); 
    } 
} 

printf("Enter value of matrix B\n");
for(i=0;i<m;i++)
{  
    for(j=0;j<n;j++)
    {
       scanf("%d",&b[i][j]); 
    } 
}

add(a,b,m,n);

return 0 ;

}

void add(int a[15][15] , int b[15][15] , int m , int n)
{
int i , j ;
for(i=0;i<m;i++)
{  
    for(j=0;j<n;j++)
    {
       a[i][j] = a[i][j] + b[i][j] ;
    }  
}

printf("Addition of matrix A and B is :\n");

for(i=0;i<m;i++)
{  
    for(j=0;j<n;j++)
    {
       printf("%d\t",a[i][j]); 
    }  
    printf("\n") ;
}

}

