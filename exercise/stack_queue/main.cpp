#include <stdio.h>
#include <stdlib.h>

typedef struct stack_node{
    int value;
    struct stack_node* previous;
}stack;

typedef struct queue_node{
    int value;
    struct queue_node* previous;
    struct queue_node* next;
}queue;

void show_stack(stack* top){
    if(top == NULL)
        printf("it is NULL\n");
    else{
        while(top!=NULL){
            printf("%d ",top->value);
            top = top->previous;
        }
    }
    printf("\n");
}

void show_queue(queue* queue_head, queue* queue_tail){
    if(queue_head == queue_tail && queue_head == NULL)
        printf("it is NULL\n");
    else{
        queue* current = queue_tail;
        while(current!=NULL){
            printf("%d ",current->value);
            current = current->previous;
        }
    }
    printf("\n");
}

stack* push_to_stack(stack* top,int value){
    stack* new_node = (stack*)malloc(sizeof(struct stack_node));
    new_node->value = value;
    if(top == NULL)
        new_node->previous = NULL;
    else
        new_node->previous = top;
    top = new_node;
    return top;
}

queue* push_to_queue(queue** queue_head, queue* queue_tail, int value){
    queue* new_node = (queue*)malloc(sizeof(queue_node));
    new_node->value = value;
    new_node->previous = new_node->next = NULL;
    if((*queue_head) == NULL && queue_tail == NULL){
        (*queue_head) = queue_tail = new_node;
    }
    else{
        new_node->previous = queue_tail;
        queue_tail->next = new_node;
        queue_tail = new_node;
    }
    return queue_tail;
}

void pop_stack(stack** top){
    if((*top) == NULL){
        printf("there is nothing to pop.\n");
    }
    else{
        printf("the top value of stack is %d\n",(*top)->value);
        stack* tmp = (*top);
        (*top)=(*top)->previous;
        free(tmp);
    }
}

void dequeue(queue** queue_head, queue** queue_tail){
    queue* tmp = (*queue_head);
    if((*queue_head) == NULL){
        printf("there is nothing to pop.\n");
        return;
    }
    if((*queue_head) == (*queue_tail)){
        printf("the head of queue is %d \n",(*queue_head)->value);
        (*queue_head) = (*queue_tail) = NULL;
    }
    else{
        printf("the head of queue is %d \n",(*queue_head)->value);
        (*queue_head) = (*queue_head)->next;
        (*queue_head)->previous = NULL;
    }
    free(tmp);
}

int main(){
    int options;
    stack* current_stack = NULL;
    queue* queue_head = NULL;
    queue* queue_tail = NULL;

    while(printf("1.push to stack\n2.push to queue\n3.pop stack\n4.dequeue\n5.show stack\n6.show queue\nPlease input your option:") && scanf("%d",&options)!=EOF)
    switch(options){
        int value;
        case 1:
            //push to stack
            scanf("%d",&value);
            current_stack = push_to_stack(current_stack,value);
            break;
        case 2:
            //push to queue
            scanf("%d",&value);
            queue_tail = push_to_queue(&queue_head,queue_tail,value);
            break;
        case 3:
            //pop stack
            pop_stack(&current_stack);
            break;
        case 4:
            //dequeue
            dequeue(&queue_head,&queue_tail);
            break;
        case 5:
            //show stack
            show_stack(current_stack);
            break;
        case 6:
            //show queue
            show_queue(queue_head,queue_tail);
            break;
        default:
            printf("error\n");
            break;
    }
	return 0;
}
