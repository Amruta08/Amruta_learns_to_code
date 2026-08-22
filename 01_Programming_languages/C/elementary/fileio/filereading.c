#include<stdio.h>

int main()
{
 //create file pointer
  FILE*ptr = NULL;
  ptr = fopen("textfile.txt","r");
//reading integer from file 
  char string[20];
  fscanf(ptr,"%s", string);
  printf("%s",string);
//closing of file
  fclose(ptr);
  return 0;
}

