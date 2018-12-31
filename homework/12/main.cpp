#include<stdio.h>
#include <cstdlib>

struct stack{
    int value;
    struct stack *next;
};

typedef struct stack Stack;
Stack* top = NULL;

void show_stack(bool isempty, int value, bool ispush){
    if(isempty && !ispush){
        printf("Error pop.\nNothing in the stack.\n");
        return;
    }

    if(ispush)  printf("push %d into stack.\n",value);
    else    printf("pop %d from stack.\n",value);

    Stack* current;
    current = top;
    while(current!=NULL){
        printf("*\t*\n");
        printf("*%5d  *\n",current->value);
        printf("*\t*\n");
        printf("*********\n");
        current = current->next;
    }
}

bool isempty(){
    if(top== NULL)  return true;
    else    return false;
}

void mypush(int input){
    Stack* new_stack;
    new_stack = (Stack*)malloc(sizeof(Stack));
    if(new_stack == NULL){
        printf("memory dump\n");
        return;
    }

    new_stack->value = input;
    new_stack->next = top;
    top = new_stack;
    show_stack(isempty(), input,1);
}

void mypop(){
    int top_value, now_is_empty=isempty();
    if(!now_is_empty){
        Stack* next_stack;Stack* preverous_stack;
        preverous_stack = top;
        //switch the top of stack
        next_stack = top->next;
        top_value = top->value;
        top = next_stack;
        free(preverous_stack);
    }
    show_stack(now_is_empty,top_value,0);
}

int main() {
    int choice,value;
    printf("Please input the instruction:");
    while((scanf("%d",&choice)!=EOF)){
        if(choice == 1){
            scanf("%d",&value);
            mypush(value);
        }
        else
            mypop();
        printf("Please input the instruction:");
    }
	return 0;
}
