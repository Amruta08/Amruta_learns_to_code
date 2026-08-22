#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int a[MAX];
int top = -1;

void push(int x);
void pop();
void display();

int main(int argc, char const *argv[])
{
    int x, choice;


    do
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter element to be pushed:");
            scanf("%d", &x);
            push(x);
            break;
        case 2 :
            pop() ;
            break;
        case 3 :
            display();
            break;
        }
        printf("\n");

    } while (choice != 4);

    return 0;
}

void push(int x){
    if(top == MAX-1){
        printf("Stack is full :(");
    }else{
        top=top+1;
        a[top]=x;
    }
     display();
}

void pop(){
    if (top == -1 )
    {
        printf("Stack is empty :(");
    }
    else{
        printf("poped element = %d\n" , a[top]);
        top = top - 1 ;
         display();
    }
}

void display(){
    int i;


        printf("\n\nstack is: \n\n");
        for ( i = top; i >=0; i--)
        {
            printf("-----\n");
            printf("| ");
            printf("%d",a[i]);
            printf(" |");
            if (top == i){
              printf("\t<-- top = %d", top);
            }
            printf("\n");
        }
        printf("-----\n");
        if (top == -1){
        printf("\t<-- top = %d", top);
        printf("\n\n\tstack is empty\n");
        }

        printf("\n");

    }


