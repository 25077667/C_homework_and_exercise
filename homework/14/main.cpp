#include <stdio.h>
#include <stdlib.h>
#define exist 1
#define not_exist -1

typedef struct node{
    int value;
    bool visible;
    struct node* left;
    struct node* right;
}tree;
tree* root=NULL; tree* parent=NULL;

bool is_insert(char* operation){
    if(operation[0]=='i')
        return true;
    else
        return false;
}

int compare(tree* current,int number){
    if(current == NULL)
        return not_exist;
    else{
        parent = current;
        if(current->value == number)
            return exist;
        else if(current->value > number)
            return compare(current->left, number);
        else
            return compare(current->right, number);
    }
}

void myinsert(int number){
    int appeared = compare(root,number);
    if(appeared == exist && parent->visible == true)
        printf("number %d is in list already.\n",number);
    else if(appeared == exist && parent->visible == false)
        parent->visible = true;
    else{
        tree* new_node = (tree*)malloc(sizeof(struct node));
        new_node->value = number;
        new_node->visible = true;
        new_node->left = new_node->right = NULL;
        if(parent->value > number)
            parent->left = new_node;
        else
            parent->right = new_node;
    }
}

void mydelete(int number){
    int appeared = compare(root,number);
    printf("Delete %d.\n",number);
    if(appeared == not_exist)
        printf("number %d is not in list.\n",number);
    else{
        tree* to_be_deleted = parent;
        to_be_deleted->visible = false;
    }
}

void inorder_traversal(tree* current){
    if(!current) return;
    inorder_traversal(current->left);
    if(current->visible)
        printf("%d ",current->value);
    inorder_traversal(current->right);
}

void print_list(){
    printf("list: ");
    inorder_traversal(root);
    printf("\n--------------------\n");
}

int main(){
    FILE* file_pointer = fopen("input.txt","r");
    root = (tree*)malloc(sizeof(struct node));

    printf("Insert the original numbers.\n");
    int init_size,i,numbers;
    fscanf(file_pointer,"%d %d",&init_size, &numbers);
    root->value = numbers;
    root->left = root->right = NULL;
    for(i=1;i<init_size;i++){
        fscanf(file_pointer,"%d ",&numbers);
        myinsert(numbers);
    }
    print_list();

    while(!feof(file_pointer)){
        char operation[6];
        fscanf(file_pointer,"%s %d",&operation, &numbers);
        if(is_insert(operation) && printf("Insert %d.\n",numbers))   //to satisfy the homework order
            myinsert(numbers);
        else
            mydelete(numbers);
        print_list();
    }
    printf("Finish total input.\n");
    fclose(file_pointer);
	return 0;
}
