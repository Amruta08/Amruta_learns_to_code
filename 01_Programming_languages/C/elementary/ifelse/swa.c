#include<stdio.h>
#include<math.h>
int main()
{
 int num1,num2,choice ;
 float c , d , e ;
printf("ENTER 2 NUMBERS;");
scanf("%d %d",&num1, &num2);

printf("enter a choice\n1 for +\n2 for -\n3 for *\n4 for \\  \n5 for squareroot \n6 for power");
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
case 5:
    d = sqrt(num1);
    e = sqrt(num2);
    printf("square root is %lf %lf \n", d , e);
    break;
case 6:
    c = pow(num1 , num2);
    printf("power %lf \n", c);
    break;
default:
    printf("enter valid choice");
}
return 0 ;
}
