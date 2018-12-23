#include <stdio.h>
#include <stdlib.h>
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
        return -1;  //not exist
    else{
        parent = current;
        if(current->value == number)
            return 1;//is exist
        else if(current->value > number)
            compare(current->left, number);
        else
            compare(current->right, number);
    }
}

void myinsert(int number){
    int is_appeared = compare(root,number);
    printf("Insert %d.\n",number);
    if(is_appeared == 1){
        printf("number %d is in the list already.\n",number);
        parent->visible = true;
    }
    else{
        tree* new_node;
        new_node = (tree*)malloc(sizeof(struct node));
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
    int is_appeared = compare(root,number);
    printf("Delete %d.\n",number);
    if(is_appeared == -1)
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

int main(){
    FILE* file_pointer;
    file_pointer = fopen("input.txt","r");
    root = (tree*)malloc(sizeof(struct node));

    int init_size,i,read_in;
    fscanf(file_pointer,"%d",&init_size);
    fscanf(file_pointer,"%d ",&read_in);
    root->value = read_in;
    root->left = root->right = NULL;
    for(i=1;i<init_size;i++){
        fscanf(file_pointer,"%d ",&read_in);
        myinsert(read_in);
    }
    printf("Insert the original numbers.\n");

    while(!feof(file_pointer)){
        char operation[6];
        int number;
        fscanf(file_pointer,"%s ",&operation);
        fscanf(file_pointer,"%d",&number);
        if(is_insert(operation))
            myinsert(number);
        else
            mydelete(number);
        //print the list
        printf("list: ");
        inorder_traversal(root);
        printf("\n-----------------\n");
    }
    fclose(file_pointer);
	return 0;
}
