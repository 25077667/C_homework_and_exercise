#include <bits/stdc++.h>
//#include <string.h>
using namespace std;
int years[10000];
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//int basic_year=2016,basic_mon=1,basic_date=1,basic_day=5; //當天星期五

void leap_year_judge(){

    memset(years,0,10000);
    for(int i=1583;i<10000;i++){
        if((!(i%4) && i%100 ) || (!(i%400) && i%4000))
            years[i]=1;
    }
}
bool normal_input(string input_string){
    bool check_flag = 0;
    if(input_string.size() == 8){
        int yyyy_int = (input_string[0]-'0')*1000+(input_string[1]-'0')*100+(input_string[2]-'0')*10+(input_string[3]-'0'), dd_int = (input_string[6]-'0')*10+(input_string[7]-'0'), mm_int = (input_string[4]-'0')*10+(input_string[5]-'0');

        if(years[yyyy_int]){    //是閏年
            if(mm_int==2 && dd_int<30 && dd_int)    //是二月且日期<30
                    check_flag = true;
            else if(mm_int>0 && mm_int<13 && mm_int-2){
                if(mon[mm_int] >= dd_int && dd_int)
                    check_flag = true;
                else
                    check_flag = false;
            }
        }
        else{
            if(mm_int==2 && dd_int<29 && dd_int)    //是二月且日期<30
                    check_flag = true;
            else if(mm_int>0 && mm_int<13 && mm_int-2){
                if(mon[mm_int] >= dd_int && dd_int)
                    check_flag = true;
                else
                    check_flag = false;
            }
        }
    }
    return check_flag;
}

int day_judge(string input_string){
    //unsigned long long int days=0;
    if(normal_input(input_string)){
        int yyyy_int = (input_string[0]-'0')*1000+(input_string[1]-'0')*100+(input_string[2]-'0')*10+(input_string[3]-'0'), dd_int = (input_string[6]-'0')*10+(input_string[7]-'0'), mm_int = (input_string[4]-'0')*10+(input_string[5]-'0');
        // 高斯公式
        int c=yyyy_int/100,y=yyyy_int%100;
        if(mm_int == 1)
            mm_int=11;
        else if(mm_int == 2)
            mm_int = 12;
        else
            mm_int-=2;
        return (int)(dd_int + (2.6*mm_int -0.2) + 5*(y%4) + 3*y + 5*(c%4))%7;
    }
    else
        return 87;
}

int main(){
    leap_year_judge();
    //1
    string input_string;
    cin >> input_string;
    cout<<(normal_input(input_string)? "Correct!":"Error!")<<endl;

    // 2
    int raw_input;
    cin>>raw_input;
    cout<<(years[raw_input]?"Leap year":"Common year")<<endl;

    // 3
    cin>>input_string;
    switch (day_judge(input_string)){
    case 1:cout<<"Monday"<<endl;break;
    case 2:cout<<"Tuesday"<<endl;break;
    case 3:cout<<"Wednesday"<<endl;break;
    case 4:cout<<"Thursday"<<endl;break;
    case 5:cout<<"Friday"<<endl;break;
    case 6:cout<<"Saturday"<<endl;break;
    case 0:cout<<"Sunday"<<endl;break;
    default:cout<<"ERROR input!"<<endl;break;
    }

    //4

	return 0;
}
