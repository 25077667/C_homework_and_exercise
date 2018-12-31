#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialGame();
int getPoint(int []);
int pcPoint();
int userPoint();
void showAcard(int);
void showCard(int []);
void showUserCard();
void showPcCard(int);
int user_turn();
void pc_turn();
void newline();
int isContinue();

int card[52], user[5], pc[5], cc=4;

int main(){
    int quit=0;
  while(!quit)
  {
    initialGame();
    if(user_turn())   // return 0 if user loss
      pc_turn();
    quit = isContinue();
  }
}/*
main()
{  int x1=3,x2=4,x3=5,x4=6;
    printf("%c%c%c%c",x1,x2,x3,x4);

}*/

void initialGame()
{
  int i,temp, p;

  srand(time(NULL));

  //洗牌
  for(i=0;i<52;i++)
  {
    card[i]=i;
  }

  for(i=0;i<52;i++)
  {
    p=rand()%52;
    temp=card[i];
    card[i]=card[p];
    card[p]=temp;
  }



  //各分兩張牌給user與pc
  user[0]=card[0];
  user[1]=card[1];
  user[2]=user[3]=user[4]=(-1);
  pc[0]=card[2];
  pc[1]=card[3];
  pc[2]=pc[3]=pc[4]=(-1);
  cc=4;
}


void newline()
{
  printf("\n");
}

int getPoint(int c[])
{
  int i,p,sum=0, a=0;
  for(i=0;i<5;i++)
  {
    if(c[i]!=(-1))
    {
      p=c[i]%13+1;
      p= (p>10)? 10: p;
      if(p==1)
        a++;
      sum+=p;
    }
  }
  if(a&&((sum+10)<=21))
    sum+=10;
  return sum;
}

int pcPoint()
{
  return getPoint(pc);
}
int userPoint()
{
  return getPoint(user);
}

void showAcard(int ca)
{
  int p;

  char suit[4]={'s','h','d','c'};
  printf("%c",suit[ca/13]);
  p=ca%13;

  switch(p+1)
  {
    case 1:
            printf("A");
            break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
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
  }

}

void showCard( int c[])
{
  int i;
  for(i=0;i<5;i++)
  {
    if(c[i]!=(-1))
    {
      showAcard(c[i]);
      printf(" ");
    }
  }
  newline();
}

void showUserCard()
{
  printf("User: ");
  showCard(user);
}

void showPcCard(int i)
{
  printf(" PC : ");
  if(i!=1)
    showCard(pc);
  else
  {
    showAcard(pc[0]);
    newline();
  }
}

int user_turn()
{
  int ucc=2, quit=0;
  char c;


  showUserCard();
  showPcCard(1);
  while((ucc<5)&&(!quit))
  {
    printf("Add a card?(y/n)");
    scanf(" %c", &c);
    if(c=='y')
    {
      user[ucc++]=card[cc++];
      showUserCard();
      if(userPoint()>21)
      {
        showPcCard(5);
        printf("I Win!\n");
        return 0;
      }
    }
    else
      quit=1;
  }
  return 1;
}

void pc_turn()
{
  int pcc=2, quit=0;
  char c;

  showPcCard(5);
  while((pcc<=5)&&(pcPoint()<16))
  {
    printf("I want to add a card...\n");
    pc[pcc++]=card[cc++];
    showPcCard(5);
  }
  if(pcPoint()>21)
    printf("You Win!\n");
  else if(userPoint()>pcPoint())
  {
    printf("You Win!\n");
  }
  else if(userPoint()==pcPoint())
  {
    printf("Even!\n");
  }
  else
  {
    printf("I Win!\n");
  }
}

int isContinue()
{
  char c;

  printf("Do you want to play again?(y/n)");
  scanf(" %c", &c);
  if(c=='y')
    return 0; // 0 for continue
  else
    return 1; // 1 for exit
}
