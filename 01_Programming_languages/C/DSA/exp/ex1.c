#include <stdio.h>
#include <conio.h>

void push(int a);
void pop();
void peek();

int main()
{

    int top = -1;
    int s[6];
    int ch, x, a, b;

        do
        {
            printf("Enter your choice\n 1: push 2: pop 3:peak 4:exit\n");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                printf("\n Entr the value");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                break;
            }
        } while (ch != 4);

         return 0;
    }




void push(int a)
{

    if (top == 6)
    {
        printf("stack is full\n");
    }
    else
    {
        s[++top] = a;
    }
}
void pop()
{
    int n = s[top];

    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {

        printf("popped value is %d\n", n);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("\n the top value is %d\n", s[top]);
    }
}
