#include<stdio.h>
int main()
{  int a = 9 ;
   int *apointer ;
   apointer = &a ;
    //printf("no. is : %d", a);
    //printf("\nmemory address is %p",&a);
    printf("address is %x\n", apointer);
    printf("address is %x\n",&a);
    printf(" value of apointer is %d",*apointer);

    return 0;
}