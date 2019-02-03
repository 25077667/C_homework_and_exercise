#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define init 0
#define Add 1
#define Modify 2
#define DEL 3
typedef struct PersonalInfo{
    int ID;
    char* name[129];
    int age;
    int gender;
    int birthday[3]; //first is year, second is month, trd is day
    PersonalInfo* LeftChild;
    PersonalInfo* RightChild;
}tree;
struct PersonalInfo arr[999];
tree* root=NULL;
tree* parent = NULL;
char* search_NAME = "";

bool insert(tree **current, tree* elements){
    //elements should be initialized
    tree* current_pointer = (*current);
    tree* tmp = (tree*)malloc(sizeof(struct PersonalInfo));
    memcpy(tmp,elements,sizeof(struct PersonalInfo));
    if(current_pointer==NULL){
        root = tmp;
        return true;
    }

    while(current_pointer){
        parent = current_pointer;
        if(current_pointer->ID == elements->ID)
            return false;
        else if (current_pointer->ID > elements->ID)
            current_pointer = current_pointer->RightChild;
        else
            current_pointer = current_pointer->RightChild;
    }

    if(parent->ID < elements->ID)
        parent->RightChild = tmp;
    else
        parent->LeftChild = tmp;
    return true;
}

void read_write_file(int choice){
    FILE* file_pointer;
    if(choice == init){
        file_pointer = fopen("data.txt","r");
        while(!feof(file_pointer)){
            tree* new_node = (tree*)malloc(sizeof(struct PersonalInfo));
            new_node->LeftChild = new_node->RightChild = NULL;

            fscanf(file_pointer,"%d %s %d %d %d/%d/%d", &(new_node->ID), &(new_node->name), &(new_node->age), &(new_node->gender), &(new_node->birthday), &(new_node->birthday)+sizeof(int), &(new_node->birthday)+(sizeof(int)*2));
            printf("%d %s %d\n", new_node->ID, new_node->name, new_node->age, new_node->gender);
            insert(&root,new_node);
        }
    }
    else if(choice == Add){
        file_pointer = fopen("data.txt","a");
    }
    else if(choice == Modify){
        //delete and modify have same behavior
        file_pointer = fopen("data.txt","w");
    }
    else{
        printf("error\n");
    }
    fclose(file_pointer);
}

int main(){
    //root = (tree*)malloc(sizeof(struct PersonalInfo));
    //root->RightChild = root->LeftChild = NULL;
    read_write_file(init);
    while(1){
        int choice;
        printf("1. Add\n2. Delete\n3. search\n4. Modify\n5. Exit\n?");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("please input new data\n");
                //add_a_node();
                read_write_file(Modify);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                continue;
        }
    }
}
