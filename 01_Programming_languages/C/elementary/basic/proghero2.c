#include <stdio.h>
#include <stdbool.h>

int add(int num1 , int num2){
  int result;
  result = num1 + num2 ;
  return result ;

  void hello(){
      printf("hello");
  }
}

int main()

{/*
 int no1 = 8;
 int no2 = 18;
 int c ;
 c = ++no1;
printf(" no1++ is %d\n", c );

int a = 99;
int b = 100;
int c , d , e ;
c = (a<b)&&(a>b);
d = (a<b)||(a>b);

printf("checking if a>b %d \n", a>b );
printf("checking if a<b %d \n", a<b );
printf("checking if a>=b %d \n", a>=b );
printf("checking if a<=b %d \n", a<=b );
printf("checking if a==b %d \n", a==b );
printf("checking if a!=b %d \n", a!=b );
printf("checking && operator %d\n", c );
printf("checking || operator %d \n", d );
//printf("checking ! operator %d \n", e );
printf("checking a+=b %d \n", a*=b );
*/
 /*
 int n1 ;
 printf("enter a no:");
 scanf("%d", &n1);
 if (n1>5){
    printf("no. %d is greater than 5",n1);
  }
    else{
        printf("you fool :(");
    }
 */
//ternary operator , same as above if else
//n1>5?printf("no. %d is greater than 5",n1):printf("you fool :(");

/*
int score;
printf("enter a score:");
scanf("%d",&score);
 if(score <=100 && score >=90 ){
    printf(" grade id s");
 }else if (score < 90 && score >= 80){
    printf("grade is a");
 }else if (score < 80 && score >= 70){
    printf("grade is b");
 }else if (score < 70 && score >= 60){
    printf("grade is c");
 }else if (score < 60 && score > 50){
    printf("grade is d");
 }else if (score == 50){
    printf("grade is e");
 }else if (score < 50 ){
    printf("grade is f");
 }else{
     printf("enter a valid score");
 }
*/

int num1,num2,choice;
printf("ENTER 2 NUMBERS;");
scanf("%d %d",&num1, &num2);

printf("enter a choice\n1 for +\n2 for -\n3 for *\n4 for /");
scanf("%d", &choice);

switch(choice)
{
case 1:
    printf("addition is %d\n",num1+num2);
    break;
case 2 :
    printf("subtraction is %d\n", num1-num2);
    break;
case 3:
    printf("multiplication is %d\n", num1*num2);
    break;
case 4:
    printf("division is %d\n", num1/num2);
    break;
default:
    printf("enter valid choice");

/*
int i ;

for (i=1;i<=20;i++ )
 {
   if(i==5)
   {
    continue;
    //break;
   }else{
       printf("%d\n", i);
 }
 }
 */
/*
do
{
  printf("enter a no.:");
  scanf("%d",&i);
  printf("%d\n",i);


}
while(i!=100);
*/
/*
  int num1 , num2 , result;
  printf("enter 2 numbers:");
  scanf("%d,%d",&num1,&num2);
  result = add(num1,num2);
  printf("addition is %d",result);
  return 0;
  */

  hello();



}




























































