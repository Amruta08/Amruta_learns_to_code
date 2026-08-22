#include<stdio.h>

int main()
{
    float a , b , c , score ;
    printf("enter your marks from 3 different subjects:");
    scanf("%f%f%f" , &a ,&b, &c);

   score = (a + b + c)/3 ;

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
    
 return 0 ;
}