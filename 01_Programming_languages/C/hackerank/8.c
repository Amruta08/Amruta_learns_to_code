#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b,int *t1,int *t2) {
    
   *t1 = *a + *b ;
   *t2 = abs(*a - *b);
}

int main() {
    int a, b , to1 , to2 ;
    int *pa = &a, *pb = &b;
    int *t1 = &to1 , *t2 = &to2;
    
    
    scanf("%d %d", &a, &b);
    update(pa, pb , t1 , t2);
    printf("%d\n%d", to1, to2);

    return 0;
}