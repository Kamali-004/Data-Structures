#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int N;
int *stack;
int top = -1;
void push()
{
    int a;
    scanf("%d",&a);
    if(top == N-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = a;
        printf("%d is pushed\n",a);
    }
}
void pop()
{
    int b;
    if(top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        b = stack[top];
        top --;
        printf("%d is popped\n",b);
    }
}
void peek()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nTop element:%d",top);
    }
}
void display()
{
    for(int i = top; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    int ch;
    printf("\nEnter the size of the stack:");
    scanf("%d",&N);
    stack = (int*)malloc(N* sizeof(int));
    do
    {
        printf("\nEnter choice: (1.Push 2.Pop 3.Peek 4.Display)\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("\nInvalid operation");
        }
    }
        while(ch!=0);
            free(stack);
            return 0;
}
        
