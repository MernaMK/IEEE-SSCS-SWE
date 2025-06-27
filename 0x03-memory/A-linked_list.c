#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int n;
    struct Node *next;
}Node;

Node* createNode()
{
    Node *a=(Node*)malloc(sizeof(Node));
    printf("Enter node:");
    scanf("%d",&a->n);
    a->next=NULL;
    return a;
}

void addEnd (Node** head,Node* a )
{
    if (*head == NULL) {
        *head = a;
        return;
    }

    Node* temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=a;
}

void printList(Node* head)
{
    int i=0;
    Node* temp=head;
    printf("\n\nLIST\n");
    while(temp!=NULL)
    {
        printf("\nNode %d: %d",++i,temp->n);
        temp=temp->next;
    }
}

void freeList(Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;  // Save the next node
        free(current);         // Free the current node
        current = next;        // Move to the next node
    }
}

void main()
{

Node* head=NULL;
int c=0;
printf("Number of nodes:");
scanf("%d",&c);

for(int i=0;i<c;i++)
{
    printf("%d)",i+1);
    addEnd(&head,createNode());
}

printList(head);
freeList(head);

}
