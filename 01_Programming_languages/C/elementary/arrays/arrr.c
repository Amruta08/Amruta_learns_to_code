#include<stdio.h>


int main()
{
 int i , n ;
 //int mark[5] = {1,2,3,4,5};
 int marks[100] ;

 //access variable through loop
 //printf("%d",mark[1]);
 /*
 for(i=0;i<5;i++){
   //printf("%d\n",mark[i]);
   scanf("%d",&mark[i]);
 }
 */

//for(i=4;i>=0;i--)
printf("enter");
scanf("%d" , &n);
printf("enter");
for ( i = 0; i <= n-1 ; i++)
{
  scanf("%d" , &marks[i]);
}



for(i=n-1;i>=0;i--)
{
   printf("%d ",marks[i]);
}

 return 0;
}
