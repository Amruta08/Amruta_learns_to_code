#include<stdio.h>

struct student
{
    int rno;
    char rname[20];
    int m1;
    int m2;
    int m3;
    int total;
} s[100];


int main()
{   
    int n , i;
    printf("Enter no. of students");
    scanf("%d" , &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter rno,name,s[i].m1,s[i].m2,s[i].m3");
        scanf("%d%s%d%d%d" ,&s[i].rno,s[i].rname,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 ;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d\n%s\n%d\n%d\n%d\n%d\n" ,s[i].rno,s[i].rname,s[i].m1,s[i].m2,s[i].m3,s[i].total);
    }
    
    return 0 ;
}