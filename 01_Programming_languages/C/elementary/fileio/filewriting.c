#include<stdio.h>

int main()
{  FILE*ptr = NULL;
   char string[30] = "anvitha";
   ptr = fopen("textfile.txt","a");
   fprintf(ptr,"%s",string);
   printf("%s",string);
   fclose(ptr);
    return 0;
}