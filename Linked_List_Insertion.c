#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Linked list searching
int linkedListSearching(struct Node *ptr, int element)
{
    while (ptr != NULL)
    {
        if (ptr->data == element)
        {
            printf("Value found");
            return 0;
        }
        ptr = ptr->next;
    }
} 


// Case 1: Inserting the first element in the linked list
struct Node *insertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// case 2: Inserting the element at a given index in the linked list
struct Node *insertionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3: Inserting the last element
struct Node *insertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Inserting an element after a node
struct Node *insertionAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 24;
    third->next = fourth;

    fourth->data = 89;
    fourth->next = NULL;

    // head = linkedListSearching(head, 45);
    printf("Before Insertion:\n");
    linkedListTraversal(head);
    // head=insertionAtIndex(head,53,4);
    // head=insertionAtFirst(head,75);
    head=insertionAtEnd(head,28);
    // head = insertionAfterNode(head, fourth, 29);
    printf("After Insertion:\n");
    linkedListTraversal(head);
}