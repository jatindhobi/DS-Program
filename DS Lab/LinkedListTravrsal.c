#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};      

void linkedListTraversal(struct Node *ptr)
{
    while (ptr !=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
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
    head->next=second;

    second->data=56;
    second->next=third;

    third->data=24;
    third->next=fourth;

    fourth->data=89;
    fourth->next=NULL;

    linkedListTraversal(head);
}