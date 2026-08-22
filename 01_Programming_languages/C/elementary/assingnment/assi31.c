#include<stdio.h>

int main()
{
 int i , j, n , m , temp, k=0 , p[100] , r[100] , v[100];
 printf("enter number of elements for both arrays:");
 scanf("%d" , &n);

printf("enter elements of array 1:\n");
 for(i=0;i<n;i++){
   scanf("%d",&p[i]);
 }
printf("enter elements of array 2:\n");
 for(i=0;i<n;i++){
   scanf("%d",&r[i]);
 }

 m = n+n ;

 for(i=0;i<n;i++){
   v[k] = p[i] ;
   k++;
 }

 for(i=0;i<n;i++){
   v[k] = r[i] ;
   k++;
 }

 for ( i = 0; i < m-1; i++)
    {
      for ( j = 0; j < m-1 ; j++)
    {
        if (v[j] < v[j+1])
        {
            temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp ;
        }   
    }

    }

    printf("merged array sorted in desecnding order:");

 for(i=0;i<m;i++){
   printf("\t%d" , v[i]);
 }

 return 0;
}
