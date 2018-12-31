#include <stdio.h>
#include <stdlib.h>

typedef enum { FALSE, TRUE } boolean;
int numder_of_students;
int q6_counter=1;
int sum_the_reverse(int input);

struct node{
    int data;
    struct node* left;
    struct node* right;
    int index;
};
typedef struct node record;
record* root=NULL; record* parent=NULL; record* appeared=NULL;

void sorting(int *arr,int n){
    for(int i=1;i<n;i++){
        int index = arr[i],j;
        for(j=i;(j>0)&&(arr[j-1]>index);j--)
            arr[j]=arr[j-1];
        arr[j]=index;
    }
}

void Question1(){
    printf("Name: ***\nStudent ID:*****");
    system("pause");
}

void Question2(){
    FILE *file3_pointer, *file4_pointer;
    file3_pointer = fopen("input3.txt","r");
    file4_pointer = fopen("input4.txt","w");
    int student_number, sub_questions, i;
    while(fscanf(file3_pointer,"%d ",&student_number) !=EOF ){
        fprintf(file4_pointer,"%d ",student_number);
        numder_of_students = student_number;
        for(i=0;i<8;i++){
            fscanf(file3_pointer,"%d",&sub_questions);
            int j,sum=0,tmp;
            for(j=0;j<sub_questions;j++){
                fscanf(file3_pointer,"%d",&tmp);
                if(tmp<0){
                    sum = tmp;
                    sub_questions = 1;
                    break;
                }
                sum+=tmp;
            }
            fprintf(file4_pointer,"%d",sum/sub_questions);
            if(i!=7)    fprintf(file4_pointer,":");
        }
        fprintf(file4_pointer,"\n");

    }
    fclose(file3_pointer);
    fclose(file4_pointer);
}

void Question3(){
    Question2();
    struct Student{
        int id;
        int all_score[8];
        int avg_score;
    }student[numder_of_students+1];

    FILE *file4_pointer;
    file4_pointer = fopen("input4.txt","r");
    int i, student_id;
    //process the initial score
    for(i=0;i<numder_of_students;i++){
        fscanf(file4_pointer,"%d ", &student_id);
        student[i].id = student_id;
        int j;
        boolean is_cheat=FALSE;
        for(j=0;j<8;j++){
            int current_score;
            fscanf(file4_pointer, "%d:",&current_score);
            if(current_score == -1)
                current_score = 0;
            else if(current_score == -2){
                current_score = 0;
                is_cheat = TRUE;
            }
            student[i].all_score[j]=current_score;
        }
        sorting(student[i].all_score,8);
        if(is_cheat)
            student[i].avg_score = (student[i].all_score[0] + student[i].all_score[1] + student[i].all_score[2] + student[i].all_score[3] + student[i].all_score[4])/5;
        else
            student[i].avg_score = (student[i].all_score[7] + student[i].all_score[6] + student[i].all_score[5] + student[i].all_score[4] + student[i].all_score[3])/5;
    }

    // bubble sort students by the score
    int a,b;
    for(a=0;a<numder_of_students;a++)
        for(b=0;b<numder_of_students;b++){
            if(student[a].avg_score>student[b].avg_score){
                student[numder_of_students] = student[a];
                student[a] = student[b];
                student[b] = student[numder_of_students];
            }
        }

    //process the ranking
    int offset = 100-(student[0].avg_score);
    printf("Ranking\t\tID\t\tScore\n\n");
    for(i=0;i<numder_of_students;i++){
        student[i].avg_score+=offset;
        printf("NO.%d\t\t%d\t\t%d\n",i+1, student[i].id, student[i].avg_score);
    }
}

int numSquareSum(int n){
    int squareSum = 0;
    while(n){
        squareSum += (n%10)*(n%10);
        n /= 10;
    }
    return squareSum;
}

record* compare(record* current_address,int number){
    if(current_address == NULL)
        return NULL;
    else{
        if(current_address->data == number)
            return current_address;
        else if((current_address->data > number) && (parent = current_address))
            return compare(current_address->left,number);
        else if((current_address->data < number) && (parent = current_address))
            return compare(current_address->right,number);
        else
            return NULL;
    }
}

boolean push(int number){
    if(number == 1 )
        return TRUE;
    else{
        if(compare(root,number)==NULL){
            record* new_record = (record*)malloc(sizeof(struct node));
            new_record->data=number;
            new_record ->left = new_record->right =NULL;

            if(parent->data > number)
                parent->left = new_record;
            else
                parent->right = new_record;

                push(numSquareSum(number));
        }
        else
            return FALSE;
    }
}

void clear_tree(record* address){
    if(address != NULL){
        clear_tree(address->right);
        clear_tree(address->left);
        free(address);
    }
}
void Question4(){
    int input,counter=1;
    while(scanf("%d",&input) != EOF){
        //use binary tree to record all the numbers
        root = NULL;
        root = (record*)malloc(sizeof(struct node));
        root->data=input;
        root->right = root->left = NULL;

        if(push(numSquareSum(input)))
            printf("Case#%d: %d is a Happy number.\n",counter,input);
        else
            printf("Case#%d: %d is an Unhappy number.\n",counter,input);
        counter++;
        clear_tree(root);
        record* root=NULL;
    }
}

boolean rand_push(int number, int push_counter){
    appeared = compare(root,number);
    if(appeared==NULL){
        record* new_record = (record*)malloc(sizeof(struct node));
        new_record ->data=number;
        new_record ->left = new_record->right =NULL;
        new_record ->index = push_counter;

        if(parent->data > number)
            parent->left = new_record;
        else
            parent->right = new_record;
        return TRUE;
    }
    else{

        return FALSE;
    }
}

void Question5(){
    root=(record*)malloc(sizeof(struct node));
    int rand_num[4],i,push_couter=1,case_counter=1;
    while(1){
        for(i=0;i<4;i++)
            scanf("%d",&rand_num[i]);
        if(rand_num[2] == 0 && rand_num[0] == 0 && rand_num[3]==0 && rand_num[1]==0)
            break;

        int next = (rand_num[0]*rand_num[3]+rand_num[1])%rand_num[2];
        root->data = rand_num[3];   //already put the next random number here
        root->right = root->left = NULL;
        root->index=0;
        while(rand_push(next,push_couter)){
            next = (rand_num[0]*next+rand_num[1])%rand_num[2];
            push_couter++;
        }
        printf("Case %d:%d\n",case_counter,push_couter-appeared->index);
        case_counter++;push_couter=1;
    }

}

int is_palindrome(int input){
    int tmp, reversed=0;
    input = tmp = sum_the_reverse(input);
    while(tmp){
        reversed = reversed*10 + (tmp%10);
        tmp/=10;
    }
    if(input == reversed)
        return input;
    else{
        q6_counter++;
        is_palindrome(input);
    }
}

int sum_the_reverse(int input){
    int result=0,tmp=input;
    while(tmp){
        result = result*10 +(tmp%10);
        tmp/=10;
    }
    return (result+input);
}

void Question6(){
    int n;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            int input, tmp; q6_counter=1;
            scanf("%d",&input);
            tmp = input;
            printf("%d %d",q6_counter,is_palindrome(input));
        }
    }
}


int main(){
    int i;

    while(1){
        printf("Please enter the number if question(0 is for exit): ");
        scanf("%d",&i);
        if(!i)  break;
        switch(i){
            case 1:
                Question1();
                break;
            case 2:
                Question2();
                break;
            case 3:
                Question3();
                break;
            case 4:
                Question4();
                break;
            case 5:
                Question5();
                break;
            case 6:
                Question6();
                break;
            default:
                printf("Undefined number!!\n");
        }
    }
	return 0;
}
