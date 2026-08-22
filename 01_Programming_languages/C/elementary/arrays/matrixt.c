#include<stdio.h>

int main()
{
 int m,n,a,b,matrix[10][10], transpose[10][10];
 printf("Enter the number of rows and columns of a matrix :");
 scanf("%d %d", &m , &n);
 printf("Enter elements of the matrix\n"); 
 for(a=0;a<m;a++)
{
  for(b=0;b<n;b++)
  {
   scanf("%d",&matrix[a][b]);
  }
}
  
for(a=0;a<m;a++)
 {
  for(b=0;b<n;b++)
  {
  transpose[b][a] = matrix[a][b] ;

  }

}

for(a=0;a<n;a++)
 {
  for(b=0;b<m;b++)
  {
  printf("%d\t" ,transpose[a][b]);
  }
printf("\n");
}

return 0 ;
}