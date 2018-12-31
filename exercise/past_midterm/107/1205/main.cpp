#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dices[10000];
void rollDice(int *arr,int seed, int n){
    srand(seed);
    int i;
    for(i=0;i<n;i++)
        arr[i]=rand()%6+1;
}

void rollTwoDice(int *arr,int seed,int n){
    int i,A_dices[10000], B_dices[10000];
    memset(A_dices,0,sizeof(A_dices));
    memset(B_dices,0,sizeof(B_dices));
    memset(dices,0,sizeof(dices));
    rollDice(A_dices,seed,n);
    rollDice(B_dices,seed+1,n);
    for(i=0;i<n;i++){
        arr[A_dices[i]+B_dices[i]]++;
        dices[i]=A_dices[i]+B_dices[i];
    }
}

void rollDiceCompetition(int seed,int n){
    int win=0,lose=0,match=0,i,useless[10000],A[10000],B[10000];
    rollTwoDice(useless,seed,n);
    memcpy(A,dices,n*4);
    rollTwoDice(useless,seed+1,n);
    memcpy(B,dices,n*4);

    for(i=0;i<n;i++){
        if(A[i]>B[i])
            win++;
        else if(A[i]<B[i])
            lose++;
        else
            match++;
    }
    printf("A win %d times.\n",win);
    printf("A lose %d times.\n",lose);
    printf("Match draw: %d\n",match);
}

int main(){
    int random_seed,n,i;
    FILE* file_pointer;
    //Q1
    file_pointer = fopen("Output.txt","w+");
    printf("Please input your seed:");
    scanf("%d",&random_seed);
    printf("Please input size:");
    scanf("%d",&n);
    srand(random_seed);
    for(i=0;i<5000;i++)
        fprintf(file_pointer,"%d ",rand()%6+1);
    fclose(file_pointer);

    printf("Q2.\n");
    int raw_array[5000], statistics_1_to_6_times[7]={0};
    rollDice(raw_array,random_seed,n);
    for(i=0;i<n;i++)
        statistics_1_to_6_times[raw_array[i]]++;

    for(i=1;i<7;i++){
        printf("%d ",i);
        int j,tmp;

        tmp=statistics_1_to_6_times[i]/100;
        if(statistics_1_to_6_times[i]%100>=50)
            tmp++;

        for(j=0;j<tmp;j++)
            printf("*");
        printf("\n");
    }

    printf("\nQ3.\n");
    int two_dice_result[13]={0};
    rollTwoDice(two_dice_result,random_seed,n);
    for(i=1;i<13;i++){
        printf("%2d ",i);
        int j,tmp;

        tmp = two_dice_result[i]/100;
        if(two_dice_result[i]%100>=50)
            tmp++;

        for(j=0;j<tmp;j++)
            printf("*");
        printf("\n");
    }

    printf("\nQ4.\n");
    rollDiceCompetition(random_seed,n);

	return 0;
}
