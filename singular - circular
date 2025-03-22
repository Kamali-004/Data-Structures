#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node*createNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}
void insertAtEnd(struct node** head, int data)
{
    struct node* newNode = createNode(data);
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct node* temp = *head;
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
}
void createCircular(struct node* head)
{
    if(head == NULL)
    {
        return;
    }
    struct node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = head;
}
void printList(struct node* head)
{
    if(head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }
    struct node* temp = head;
    do{
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    while(temp!=head);
    {
        printf("(Head)\n");
    }
}
int main()
{ 
    struct node* head = NULL;
    insertAtEnd(&head,10);
    insertAtEnd(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    printf("Singular Linked List:\n");
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    createCircular(head);
    printf("Circular Linked List:\n");
    printList(head);
    return 0;
}
