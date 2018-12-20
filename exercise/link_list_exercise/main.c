#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node* prev;
    struct node* next;
};

typedef struct node record;
record* root=NULL; record* parent=NULL; record* tail=NULL;

record* compare(record* current_address,int number){
    if(current_address == NULL)
        return NULL;
    else{
        if(current_address->value == number)
            return current_address;
        else{
            parent = current_address;
            compare(current_address->next,number);
        }
    }
}

void push(int number){
    record* new_record;
    new_record = compare(root,number);
    if(new_record == NULL){
        new_record = (record*)malloc(sizeof(struct node));
        new_record->value = number;
        new_record->prev = parent;
        new_record->next =NULL;
        parent->next = new_record;
    }
    else
        return;
}

int main(){
    int tmp;
    root = (record*)malloc(sizeof(struct node));
    scanf("%d",&tmp);
    root->value = tmp;
    root->next = root->prev = NULL;
    record* current_address = root;
    printf("%d -> ",tmp);
    for(;scanf("%d",&tmp)!=EOF;){
        printf("%d -> ",tmp);
        push(tmp);
    }
    for(;current_address!=NULL;){
        printf("%d -> ",current_address->value);
        current_address = current_address->next;
    }

	return 0;
}
