#include<stdio.h>
int main()
{   int a ;
    float b ;
    double c ;
    long d;
    char e ;
    char f[20] ;

    printf("int size %zu\n" , sizeof(a));
    printf("float size %zu\n" , sizeof(b));
    printf("double size %zu\n" , sizeof(c));
    printf("long  size %zu\n" , sizeof(d));
    printf("char size  %zu\n" , sizeof(e));
    printf("string size %zu\n" , sizeof(f));
    return 0 ;
}