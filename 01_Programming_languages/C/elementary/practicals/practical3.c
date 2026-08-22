#include<stdio.h>

int main()
{
    float a , b , c , score , per ;
    printf("enter your marks from 3 different subjects:");
    scanf("%f%f%f" , &a ,&b, &c);

   score = a + b + c;
   per = (score/300)*100;

    if(per >= 70 ){
    printf("Distinction");
 }else if (per >= 60){
    printf("first class");
 }else if (per >= 50){
    printf("second class");
 }else if (per >= 40){
    printf("pass class");
 }else{
     printf("fail");
 }
    
 return 0 ;
}