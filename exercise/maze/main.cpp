#include <stdio.h>
#include <stdlib.h>
#define arrived 3
#define wall 2
//BFS
int maze[9][9] = {
{2, 2, 2, 2, 2, 2, 2, 2, 2},
{2, 0, 2, 0, 0, 0, 0, 0, 2},
{2, 0, 2, 2, 0, 2, 2, 0, 2},
{2, 0, 2, 0, 0, 2, 0, 0, 2},
{2, 0, 2, 0, 2, 0, 2, 0, 2},
{2, 0, 0, 0, 0, 0, 2, 0, 2},
{2, 2, 2, 2, 2, 2, 2, 0, 2},
{2, 0, 0, 0, 0, 0, 0, 0, 2},
{2, 2, 2, 2, 2, 2, 2, 2, 2}};

typedef struct node{
    int x;
    int y;
    struct node* previous;
}stack_node;
stack_node* top=NULL;

void push(int point_y, int point_x){
    stack_node* current = (stack_node*)malloc(sizeof(struct node));
    current->x = point_x;
    current->y = point_y;
    if(top == NULL){
        top = current;
        current->previous = NULL;
    }
    else{
        current->previous = top;
        top = current;
    }
    printf("push %d %d\n",top->x,top->y);
}

bool pop(){
    if(top == NULL){
        return false;
    }
    else{
        printf("pop %d %d\n",top->x,top->y);
        stack_node* tmp = top;
        top = top->previous;
        free(tmp);
        return true;
    }
}

int main(){
    int current_x = 1, current_y = 1,i;

    for(i=0;i<9;i++){
        int j;
        for(j=0;j<9;j++){
            if(maze[i][j]==arrived)
                printf(" ");
            else
                printf("%d ",maze[i][j]);
        }
        printf("\n");
    }

    maze[1][1]=arrived;
    push(1,1);
    while(current_x!=7 || current_y!=7){
        printf("current %d %d\n",top->x,top->y);
        bool nonpath=true;
        if(maze[current_y-1][current_x] < wall){
            //up
            nonpath = false;
            push(current_y-1,current_x);
            maze[current_y-1][current_x] = arrived;
        }
        if(maze[current_y+1][current_x] < wall){
            //down
            nonpath = false;
            push(current_y+1,current_x);
            maze[current_y+1][current_x] = arrived;
        }
        if(maze[current_y][current_x+1] < wall){
            //right
            nonpath = false;
            push(current_y,current_x+1);
            maze[current_y][current_x+1] = arrived;
        }
        if(maze[current_y][current_x-1] < wall){
            //left
            nonpath = false;
            push(current_y,current_x-1);
            maze[current_y][current_x-1] = arrived;
        }

        //to the next point
        if(nonpath && pop()==false){
            printf("error pop\n");
            break;
        }
        current_x = top->x;
        current_y = top->y;
    }

    //trace the path in the stack
    do{
        //printf("path %d %d \n",top->x,top->y);
        maze[top->y][top->x]=1;
    }while(pop() && top!=NULL);


    for(i=0;i<9;i++){
        int j;
        for(j=0;j<9;j++){
            if(maze[i][j]==arrived || maze[i][j]==0)
                printf("  ");
            else
                printf("%d ",maze[i][j]);
        }
        printf("\n");
    }
	return 0;
}
