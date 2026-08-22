#include<stdio.h>
 void star()
 {
 int i;
 for(i=1;i<=80;i++)
 {
    printf("*");
 }
}

int add(int a,int b)
 {
    int c;
    c = a + b;
    printf("sum is %d",c);

 }

void main()

{ int m,n;
 star();
 printf("\n enter 2 no. :");
 scanf("%d %d",&m,&n);
 //printf("enter")
 star();
 printf("\n");
 add( m ,n);
 printf("\n");
 star();
}
