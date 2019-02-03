#include<bits/stdc++.h>
#define exist 1
#define not_exist -1
using namespace std;
typedef struct PersonalInfo{
    int ID;
    string name;
    int age;
    int gender;
    int birthday[3];
    PersonalInfo* LeftChild;
    PersonalInfo* RightChild;
}tree;
tree* root = NULL; tree* parent=NULL;

bool readin_info(tree* this_node){
    cout<<"Please input new data"<<endl;
    cout<<"ID:";cin>>this_node->ID;
    cout<<"Name:";scanf("%s", &(this_node->name));
    cout<<"Age:";cin>>this_node->age;
    cout<<"Gender:";cin>>this_node->gender;
    cout<<"Birthday:";scanf("%d %d %d",&(this_node->birthday[0]),&(this_node->birthday[1]),&(this_node->birthday[2]));
    return true;
}

void traversal(tree* current, bool is_write_file, FILE* file_pointer){
    if(!current) return;
    traversal(current->LeftChild,is_write_file,file_pointer);

    if(is_write_file && file_pointer!=NULL)
        fprintf(file_pointer,"%d %s %d %d %d/%d/%d\r\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
    else
        printf("%d %s %d %d %d %d %d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));

    traversal(current->RightChild,is_write_file,file_pointer);
}

int find_id_is_exist(tree* current,tree* this_node){
    if(current == NULL)
        return not_exist;
    else{
        parent = current;
        if(current->ID == this_node->ID)
            return exist;
        else if(current->ID > this_node->ID)
            return find_id_is_exist(current->LeftChild, this_node);
        else
            return find_id_is_exist(current->RightChild, this_node);
    }
}

void add_node(tree* current, tree* tmp){
    //if you find_id_is_exist and re-traversal to add a new node, you might have double time
    int appeared = find_id_is_exist(root,tmp);
    if(appeared == exist)
        cout<<"It's already in the record."<<endl;
    else{
        tree* new_node = new PersonalInfo;
        memcpy(new_node,tmp,sizeof(struct PersonalInfo));
        if(parent->ID > new_node->ID)
            parent->LeftChild = new_node;
        else
            parent->RightChild = new_node;
    }
}

bool user_add_node(){
    tree* tmp = new PersonalInfo;
    readin_info(tmp);
    tmp->LeftChild = tmp->RightChild = NULL;
    add_node(root,tmp);
    delete tmp;
    return true;
}

bool delete_node(tree* current,int id){
    if(current == NULL)
        return false;

    if(current->ID > id){
        parent = current;
        return delete_node(current->LeftChild, id);
    }
    else if(current->ID < id){
        parent = current;
        return delete_node(current->RightChild,id);
    }
    else{
        //founded it at "current"
        //both children is exist
        if(current->LeftChild && current->RightChild){
            tree* successor = current->LeftChild;
            tree* successor_parent = current;
            while(successor->RightChild){
                successor_parent = successor;
                successor = successor->RightChild;
            }
            //copy data to current
            tree* tmp = new PersonalInfo;
            memcpy(tmp, successor, sizeof(successor));
            tmp->LeftChild = current->LeftChild;
            tmp->RightChild = current->RightChild;
            memcpy(current,tmp,sizeof(tmp));
            delete tmp;
            //link successor_parent children
            if(successor_parent != current)
                successor_parent->RightChild = successor->LeftChild;
            else
                successor_parent->LeftChild = successor->LeftChild;

            delete successor;
        }

        else if(current->LeftChild && current->RightChild == NULL){
            //only LeftChild
            tree* child = current->LeftChild;
            memcpy(current, child,sizeof(current));
        }
        else if(current->LeftChild==NULL && current->RightChild){
            //only RightChild
            tree* child = current->RightChild;
            memcpy(current, child,sizeof(current));
        }
        else{
            //not exist children
            delete current;
            current = NULL;
        }
        return true;
    }
}

bool name_is_same(string a, string b){
    bool result = true;
    int length = b.length();
    while(length--){
        if(a[length]!=b[length]){
            result = false;
            break;
        }
    }
    return result;
}

int find_data(tree* current, tree* wanted,int selection ,int had_found){
    if(!current)
        return had_found;
    find_data(current->LeftChild, wanted, selection,had_found);
    switch (selection){
        case 1:
            if(current->ID == wanted->ID)
                printf("ID:%d\nName:%s\nAge:%d\nGender:%d\nBirthday:%d/%d/%d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
                had_found++;
            break;
        case 2:
            if(name_is_same(current->name,wanted->name))
                printf("ID:%d\nName:%s\nAge:%d\nGender:%d\nBirthday:%d/%d/%d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
            had_found++;
            break;
        case 3:
            if(current->age == wanted->age)
                printf("ID:%d\nName:%s\nAge:%d\nGender:%d\nBirthday:%d/%d/%d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
            had_found++;
            break;
        case 4:
            if(current->gender == wanted->gender)
                printf("ID:%d\nName:%s\nAge:%d\nGender:%d\nBirthday:%d/%d/%d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
            had_found++;
            break;
        case 5:
            if((current->birthday[0] == wanted->birthday[0] && current->birthday[1] == wanted->birthday[1] && current->birthday[2] == wanted->birthday[2]))
                printf("ID:%d\nName:%s\nAge:%d\nGender:%d\nBirthday:%d/%d/%d\n",current->ID,(current->name),(current->age),(current->gender),(current->birthday[0]),(current->birthday[1]),(current->birthday[2]));
            had_found++;
            break;
        default:
            break;
    }
    find_data(current->RightChild,wanted,selection,had_found);
}

void search_for_people(){
    int selection;
    tree* wanted = new PersonalInfo;
    wanted->age = wanted->birthday[0] = wanted->birthday[1] = wanted->birthday[2] = wanted->gender = wanted->ID = INT_MAX;
    cout<<"Please input field to search "<<"(1.ID 2.Name 3.Age 4.Gender 5.Birthday):";
    cin>>selection;
    switch(selection){
        case 1:
            cout<<"Please input ID:";
            cin>>wanted->ID;
            break;
        case 2:
            cout<<"Please input name:";
            scanf("%s",&(wanted->name));
            break;
        case 3:
            cout<<"Please input age:";
            cin>>wanted->age;
            break;
        case 4:
            cout<<"Please input gender:";
            cin>>wanted->gender;
            break;
        case 5:
            cout<<"Please input Birthday:";
            scanf("%d %d %d",&(wanted->birthday[0]),&(wanted->birthday[1]),&(wanted->birthday[2]));
            break;
        default:
            cout<<"input error.\n"<<endl;
            break;
    }
    int had_found = find_data(root,wanted,selection,0);
    if(had_found == false)
        cout<<"Not found."<<endl;
}

void modify_a_node(){
    tree* tmp = new PersonalInfo;
    cout<<"Please input data ID:";
    cin>>tmp->ID;
    if(find_id_is_exist(root,tmp) == exist)
        readin_info(parent);
    else
        cout<<"not exist.\n";
    delete tmp;
}

void readin_file(){
    FILE* file_pointer = fopen("data.txt","r");
    tree* tmp = new PersonalInfo;

    fscanf(file_pointer,"%d %s %d %d %d/%d/%d",&(tmp->ID),&(tmp->name),&(tmp->age),&(tmp->gender),&(tmp->birthday[0]),&(tmp->birthday[1]),&(tmp->birthday[2]));
    memcpy(root,tmp,sizeof(tmp));
    root->LeftChild = root->RightChild = NULL;

    while(!feof(file_pointer)){
        fscanf(file_pointer,"%d %s %d %d %d/%d/%d",&(tmp->ID),&(tmp->name),&(tmp->age),&(tmp->gender),&(tmp->birthday[0]),&(tmp->birthday[1]),&(tmp->birthday[2]));
        tmp->LeftChild = tmp->RightChild = NULL;
        add_node(root,tmp);
    }
    delete tmp;
    fclose(file_pointer);
}

void write_file(tree* current){
    FILE* file_pointer = fopen("data1.txt","w");
    traversal(current,true,file_pointer);
    fclose(file_pointer);
}

int main(){
    root = new PersonalInfo;
    readin_file();
    //traversal(root,false,NULL);
    int selection;
    do{
        cout<<"1. Add\n2. Delete\n3. Search\n4. Modify\n5. Exit\n?";
        cin>>selection;
        int id;
        switch(selection){
            case 1:
                if(user_add_node() == true)
                    write_file(root);
                break;
            case 2:
                cin>>id;
                if(delete_node(root,id) == true)
                    cout<<"Data deleted"<<endl;
                else{
                    cout<<"Not found"<<endl;
                }
                write_file(root);
                break;
            case 3:
                search_for_people();
                break;
            case 4:
                modify_a_node();
                write_file(root);
                break;
            default:
                break;
        }
    }while(selection!=5);
    return 0;
}
