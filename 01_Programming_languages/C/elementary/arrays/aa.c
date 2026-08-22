#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 //int num[3];
 int num[3] = {23,45,65};
 //assigning values
 //num[0]= 23;
 num[1]= 43;
 //num[2]= 33;
 for(i=0;i<3;i++){
 printf("%d\n",num[i]);
 }
 getch();
 return 0;
}