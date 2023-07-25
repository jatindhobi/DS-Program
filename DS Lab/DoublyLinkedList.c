#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linkedListNextTraversal(struct Node *ptr)
{
    while (ptr !=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

void linkedListPrevTraversal(struct Node *ptr)
{
    while (ptr !=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->prev;
    }
    
}

void main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=45;
    head->prev=NULL;
    head->next=second;

    second->data=56;
    second->prev=head;
    second->next=third;

    third->data=24;
    third->prev=second;
    third->next=fourth;

    fourth->data=89;
    fourth->prev=third;
    fourth->next=NULL;

    printf("Traversal using next\n");
    linkedListNextTraversal(head);
    printf("Traversal using previous\n");
    linkedListPrevTraversal(fourth);
}