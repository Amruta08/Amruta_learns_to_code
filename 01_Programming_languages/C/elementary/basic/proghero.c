#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{ //introduce yourself
  /*
  printf(" name is xyz \n age is 0 \n hobbies is xyz");
  return 0;
  */

  //bounce back
  /*
  int favno;
  printf("enter your fav no:");
  scanf("%d",&favno);
  printf("fav no is %d",favno);
  return 0;
  */

  //age calculator
  /*
  int birth_year,current_year,user_age;
  printf("enter your birth year:");
  scanf("%d",&birth_year);
  printf("enter current year:");
  scanf("%d",&current_year);
  user_age=current_year-birth_year;
  printf("your age is %d",user_age);
  return 0;
  */

  //average
  /*
  float sub1,sub2,sub3,avg,avg2;
  printf("enter your marks:");
  scanf("%f",&sub1);
  scanf("%f",&sub2);
  scanf("%f",&sub3);
  avg=sub1+sub2+sub3;
  avg2=avg/3;
  printf("avg is %f",avg2);
  */

  //swap 2 no.
  /*
  int a,b;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  b=a+b;
  a=b-a;
  b=b-a;
  printf("a is:%d\n",a);
  printf("b is:%d",b);
  */

  //square root
  /*
  double a,square;
  printf("enter a no.");
  scanf("%lf",&a);
  square=sqrt(a);
  printf("square root of %f is %f",a,square);
  */

  //area of circle
  /*
  float r , area;
  printf("enter radius:");
  scanf("%f",&r);
  //area = 3.14159265*r*r;
  printf("area of circle is:%f",area);
  */

  //area of rectangle
  /*
  float l,b,area;
  printf("enter length:");
  scanf("%f",&l);
  printf("enter breadth");
  scanf("%f",&b);
  area = l*b;
  printf("area of rectangle is %f",area);
  */

  //even or odd
  /*
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  //ternary operator ?:
  if(a%2 == 0){
    printf("number is even");
  }else{
  printf("number is odd");
  }
  */

  //bank balance
  /*
  float bank_balance,withdrawal_amount;
  printf("enter bank balance:");
  scanf("%f", &bank_balance);
  printf("enter withdrawal amount:");
  scanf("%f", &withdrawal_amount);
  if (bank_balance>withdrawal_amount){
    printf("successful withdrawal");
  }else{
  printf("error");
  }
  */

  int num;
  printf("enter a no:");
  scanf("%d",&num);
  for(int i= 1;i<=10;++i){
    printf("%dx%d=%d\n",num,i,num*i);
  }






  }
