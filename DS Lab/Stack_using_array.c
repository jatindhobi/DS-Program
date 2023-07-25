#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        printf("Stack is Empty!");
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        printf("Stack Full\n");
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Can't Add\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("%d Successfully added\n",val);
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Can't Remove\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        printf("%d Popped\n",val);
    }
}

int peek(struct stack *ptr,int i){
    int arrayind=ptr->top - i + 1;
    if(arrayind < 0){
        printf("Not valid poaition");   
    }
    else{
        return ptr->arr[arrayind];
    }
}

int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}

void main(){
        struct stack *s=(struct stack *) malloc(sizeof(struct stack));;
        s->size=10;
        s->top=-1;
        s->arr=(int *)malloc(s->size * sizeof(int));
    push(s,58);
    push(s,53);
    push(s,83);
    push(s,95);
    push(s,58);
    push(s,18);
    push(s,94);
    push(s,78);
    push(s,29);
    // for(int j=1;j<=s->top + 1;j++){
    //     printf("Element:%d\n",peek(s,j));
    // }
    printf("The top most element is %d\n",stackTop(s));
    printf("The top Bottom element is %d\n",stackBottom(s));

}