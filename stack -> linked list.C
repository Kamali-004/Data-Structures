#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
void push(int x)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        newNode -> data = x;
        newNode -> link = top;
        top = newNode;
        printf("%d is pushed\n",x);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp -> link;
        }
    }
}
void peek()
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top Elements:%d\n",top -> data);
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("%d is popped\n",top -> data);
        top = top -> link;
        free(temp);
    }
}
int main()
{
    int data,ch;
    do
    {
        printf("\nEnter your choice:(1.Push 2.Pop 3.Peek 4.Display)\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the data to push:");
                scanf("%d",&data);
                push(data);
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
            case 0:
                printf("Existing program...");
                break;
            default:
                printf("Invalid operation\n");
        }
    }while(ch != 0);
    while(top != NULL)
    {
        pop();
    }
    return 0;
}
