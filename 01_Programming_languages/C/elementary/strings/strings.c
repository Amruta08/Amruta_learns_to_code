#include<stdio.h>
int main()

{ /*
   char alpha[6] = {'h','e','l','l','o','\0'};
   char na[5] = "john" ;
   char nam[] = "soumya";
   char name[] = {'z','o','o','m','\0'};
  printf("%s\n", alpha);
  printf("%s\n", na);
  printf("%s\n", name);
  printf("%s\n", nam);
  */
 /*
  char name[20];
  printf("enter your name: ");
  scanf("%s",&name);
  printf(" your name is %s", name);
    return 0;
*/
//for displyaing full string
 char ironman[20];
 printf("enter your full name:");
// fgets(ironman,sizeof(ironman),stdin);
gets(ironman);
 printf("full name is:");
 puts(ironman);
 return 0;

}