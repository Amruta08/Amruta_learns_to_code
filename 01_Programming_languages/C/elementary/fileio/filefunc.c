#include<stdio.h>

int main()
{  
 FILE*ptr = NULL;
 ptr = fopen("textfile.txt","a+");
 //char*c = fgetc(ptr);
 char string[20];
 fputc('o',ptr);
 fputs("string",ptr);
 fclose(ptr);
 return 0;
}