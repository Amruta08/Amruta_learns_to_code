#include<stdio.h>
#include<string.h>
int main()
{
    char a[10] = "hello";
    char b[10] = "  hi";
    char c[30] ;
    int length ;
    int sic;

    // copies one string to another string
   // strcpy(c,a);
   // printf("copied value is: %s\n",c);

    // adds one string into the end of another string
    strcat(a,b);
    printf("concatenation is: %s \n",a);

    // returns length of string
    //length = strlen(a);
    //printf("length of string is: %d \n",length);

    //compares 2 strings
   // sic = strcmp(b,a);
    //printf("comparision is : %d",sic);



    return 0;
}
