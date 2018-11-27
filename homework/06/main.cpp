#include <bits/stdc++.h>
using namespace std;
int years[10000];
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

void leap_year_judge(){

    memset(years,0,10000);
    for(int i=1583;i<10000;i++){
        if((!(i%4) && i%100 ) || (!(i%400) && i%4000))
            years[i]=1; //is a leap year
    }
}

int main(){
    leap_year_judge();
    int input;
    while(cout<<"Input: " && cin >> input && input/1000000 && !(input/10000000) && (input%1000)/10 <13 && input%10 <7){
        int count_of_first_line = 7 - (input%10);    //record the first line last number
        int count_of_looping=1;
        if(years[input/1000])
                mon[2]=29;
        const char* line1[]={"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        printf("%29s, %d\n",line1[(input%1000)/10], input/1000);
        cout<<"  SUN  MON  TUE  WED  THU  FRI  SAT"<<endl;

        for(int i=0;i<input%10;i++)
            cout<<"     ";
        for(int i=input%10, j=1;i<7;i++,j++)
            printf("%5d",j);
        cout<<endl;
        for(int i=count_of_first_line+1;i<=mon[(input%1000)/10];i++){
            if(count_of_looping == 7){
                printf("%5d\n",i);
                count_of_looping = 1;
            }
            else{
                printf("%5d",i);
                count_of_looping ++;
            }
        }
        cout<<endl;
    }
    cout<<"INPUT ERROR AND BREAK"<<endl;
    return 0;
}
