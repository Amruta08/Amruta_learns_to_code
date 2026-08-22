#include <stdio.h>
#include <stdlib.h>
#define MAX 5

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
        default:
            printf("enter correct choice");
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
}

void pop(){
    if (top == -1 )
    {
        printf("Stack is empty :(");
    }
    else{
        printf("poped element = %d\n" , a[top]);
        top = top - 1 ;
    }
}

void display(){
    int i;

    if (top ==-1)
    {
        printf("stack is empty");
    }
    else{
        printf("stack is: \n\n");
        for ( i = top; i >=0; i--)
        {
            printf("%d\n",a[i]);
        }

        printf("\n");

    }

}
