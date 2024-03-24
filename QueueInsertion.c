#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int top;
    int bottom;
    int *arr;
};

int isEmpty(struct queue *ptr){
    if(ptr->bottom==ptr->top){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *ptr,int val){
    if(isFull(ptr)){
        printf("This queue is full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("Enqueued element:%d\n",val);
    }
}

void dequeue(struct queue *ptr){
    int val=-1;
    if(isEmpty(ptr)){
        printf("This queue is empty\n");
    }
    else{
        ptr->bottom++;
        val =ptr->arr[ptr->bottom];
        printf("Dequeued element:%d\n",val);
    }   
}

int main(){
    struct queue *s;
    s->size=100;
    s->top=-1;
    s->bottom=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

    enqueue(s,48);
    enqueue(s,83);
    dequeue(s);
    dequeue(s);
    return 0;
}