#include<stdio.h>

int main()
{  
 FILE*ptr = NULL;
 ptr = fopen("textfile.txt","r");
 //char*c = fgetc(ptr);
 char string[20];
 fgets( string , 6 , ptr);
 printf("character I read was %s",string);
 //printf("character I read was %c",c);
 fclose(ptr);

 return 0;
}