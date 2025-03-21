#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* createNode(int data)
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
        *head == NULL;
        return;
    }
    struct node* temp = *head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
}
void deleteEnd(struct node** head)
{
    if(*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node* temp =*head;
    if(temp -> next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    free(temp -> next);
    temp->next = NULL;
}
void printList(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("Null\n");
}
int main()
{
    struct node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printf("Existing List:\n");
    printList(head);
    deleteEnd(&head);
    printf("\nUpdated List:\n");
    printList(head);
    return 0;
}
