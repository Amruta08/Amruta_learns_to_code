#include<stdio.h>
int main()
{
char choice ;
printf("ENTER A LETTER;");
scanf("%c",&choice);


switch(choice)
{
case 'A':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'a' :
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'E':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'e':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'I':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'i':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'O':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'o':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'U':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
case 'u':
    printf("YOU HAVE ENTERED A VOWEL");
    break;
default:
    printf("YOU HAVE ENTERED A CONSONANT");
}
return 0 ;
}
