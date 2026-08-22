#include<stdio.h>

struct emp
{
   int eid ;
   int sal ;
   char ename[20] ;
   char eaddr[50] ;
} e1 , e2 ;


int main()
{
   printf("Enter id,sal, name and address of employee1");
   scanf("%d%d%s%s" , &e1.eid,&e1.sal, e1.ename ,e1.eaddr);
   printf("Enter id,sal, name and address of employee2");
   scanf("%d%d%s%s" , &e2.eid,&e2.sal, e2.ename ,e2.eaddr);
   printf("e1 details:- \n%d\n%d\n%s\n%s\n" , e1.eid,e1.sal, e1.ename ,e1.eaddr);
   printf("e2 details:- \n%d\n%d\n%s\n%s\n" , e2.eid,e2.sal, e2.ename ,e2.eaddr);
   return 0 ;
}