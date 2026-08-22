#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5] ={1,2,3,4,5};
    int top = 4 ;
    for(int i= 4 ; i>= 0 ; i--){
    printf("-----\n");
    printf("| ");
    printf("%d" , arr[i]);
    printf(" |");
    if (top == i)
    {
        printf("\t<-- top = %d", top);
    }
    printf("\n");
    }
    printf("-----\n");
    if (top == -1)
    {
        printf("\t<-- top = %d", top);
    }


    return 0 ;
}
