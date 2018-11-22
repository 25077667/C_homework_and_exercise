#include <bits/stdc++.h>
using namespace std;
int card[52], card_of_user[5], card_of_pc[5], card_on_field=4;

void show_card(int card_value){
     int p;

     char suit[4] = {'s', 'h', 'd', 'c'};
     printf("%c", suit[card_value/13]);
     p = card_value%13;

     switch(p+1){
      case 1:
       printf("A");
       break;
      case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:
       printf("%1d", p+1);
       break;
      case 10:
       printf("T");
       break;
      case 11:
       printf("J");
       break;
      case 12:
       printf("Q");
       break;
      case 13:
       printf("K");
       break;
     }
}

void initial_game(){
     srand(time(NULL));
     for(int i=0;i<52;i++){
      card[i] = i;
     }  //random card
     for(int i=0; i<52; i++)
        swap(card[i],card[rand()%52]);

     //各分兩張牌給user和pc
     card_of_user[0]=card[0];
     card_of_user[1]=card[1];
     card_of_user[2] = card_of_user[3] = card_of_user[4]= -1;

     card_of_pc[0] = card[2];
     card_of_pc[1] = card[3];
     card_of_pc[2] = card_of_pc[3] = card_of_pc[4] = -1;
     card_on_field = 4;
     cout<<"User: ";show_card(card_of_user[0]);cout<<" ";show_card(card_of_user[1]);cout<<endl;
     cout<<"PC: ";show_card(card_of_pc[0]);cout<<endl;
}

int score(char who){
    int sum = 0;
    if(who == 'u')
        for(int i=0;i<5;i++){
            if(card_of_user[i]!=-1 && card_of_user[i] < 10)
                sum+=( (card_of_user[i]%13)+1 );
            else if(card_of_user[i]!=-1 && card_of_user[i] >=10)
                sum+=10;
            else
                break;
        }
    if(who == 'p')
        for(int i=0;i<5;i++){
            if(card_of_pc[i]!=-1 && card_of_pc[i] < 10)
                sum+=( (card_of_pc[i]%13)+1 );
            else if(card_of_pc[i]!=-1 && card_of_pc[i] >=10)
                sum+=10;
            else
                break;
        }
    return sum;
}

void give_card(char who){
    if(who == 'u'){
        for(int i=0;i<5;i++){
            if(card_of_user[i]==-1){
                card_of_user[i] = card[card_on_field];
                card_on_field ++;
                break;
            }
        }
    }
    if(who == 'p'){
        for(int i=0;i<5;i++){
            if(card_of_pc[i]==-1){
                card_of_pc[i] = card[card_on_field];
                card_on_field ++;
                break;
            }
        }
    }
}

bool user_tern(){
    char want_card;cout<<"Add a card? (y/n)"<<endl;cin>>want_card;
    if(want_card == 'y'){
        give_card('u');//user
        for(int i=0;i<5;i++){
            if(card_of_user[i]==-1)
                break;
            else{
                show_card(card_of_user[i]);
                cout<<" ";
            }
        }   //show user card


        return 1;
    }
    else{
        return 0;
    }

}

void pc_turn(){
    if(score('p')>16)
        return;
    else{
        give_card('p');
    }
}

int isContinue(){
    cout<<"\nUser: ";
        for(int i=0;i<5;i++){
            if(card_of_user[i]==-1)
                break;
            else{
                show_card(card_of_user[i]);
                cout<<" ";
            }
        }

        cout<< "\nPC: ";
        for(int i=0;i<5;i++){
            if(card_of_pc[i]==-1)
                break;
            else{
                    show_card(card_of_pc[i]);
                    cout<<" ";
            }
        }

        int user_score = score('u');
        int pc_score = score('p');
        if(user_score > pc_score)
            cout<<"\nYou Win!"<<endl;
        else
            cout<<"\nI Win!"<<endl;
    bool ans;
    cout<< "\nQuit ?(1/0)"<<endl;cin>>ans;
    return ans;
}

int main(){
    int quit = 0;
    while(!quit){
        initial_game();
        if(user_tern())
            pc_turn();
        quit = isContinue();
    }
}
