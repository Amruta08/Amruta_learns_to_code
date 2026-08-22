#include<stdio.h>
void toh(int n,char a,char b,char c);
int main()
{
    int n;
    printf("enter no. of disks");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}
void toh(int n,char a,char b,char c){
    if (n==1)
    {
        printf("move %d from %c to %c\n",n,a,c);
    }
    else
    {
        toh(n-1,'a','b','c');
        printf("move %d from %c to %c\n",n,a,c);
        toh(n-1,'b','c','a');
    }
    
}