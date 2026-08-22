#include<stdio.h>

int main()
{  char c ;
   int lower ;
   int upper ;
   printf("enter a charactar ");
   scanf("%c" , &c);
   lower = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
   upper = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );

   if ( lower || upper){
       printf("you have entered a vowel");
   }else{
       printf("you have entered a consonant");
   }
    return 0 ;
}