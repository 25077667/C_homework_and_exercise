#include<bits/stdc++.h>
using namespace std;
double tan_value(int a,int b,int c,int d,int e,int x){
    return (-1)*a*sin(b*acos(-1)*x /30)*b*acos(-1)/30 + c*cos(x*d*acos(-1)/30)*d*acos(-1)/30;   //we know that arccos(-1) is equal to pi
}
int original_function(int a,int b,int c,int d,int e,int x){
    return  a*cos(b*acos(-1)*x /30) + c*sin(x*d*acos(-1)/30)+e;
}
int main()
{
    int a,b,c,d,e,lower_x,upper_x;
    cout<<"請輸入5個係數 : ";
    cin>>a>>b>>c>>d>>e;
    cout<<"請輸入x軸範圍 : ";
    int cache1,cache2;  cin>>cache1>>cache2;    upper_x=max(cache1,cache2);lower_x=min(cache1,cache2);
    int tan_point;  cout<<"請輸入所求切點的x值 : ";cin>>tan_point;if(tan_point>upper_x || tan_point<lower_x){cout<<"i want to crash ";system("pause");return 0;}
    printf("實際切線斜率 : %.6f\n",tan_value(a,b,c,d,e,tan_point));

    cout<<"   -35  -30  -25  -20  -15  -10  -5    0     5    10   15   20   25   30   35\n";
    for(int x=lower_x; x<=upper_x; x++){
        for(int y=-39; y<=40; y++){
            int point_y_value=original_function(a,b,c,d,e,x);
            if(x==lower_x){
                if(point_y_value==y)
                    cout<<"*";
                else if(y==0)
                    printf("%d",x);
                else if(y==40)
                    printf("Y");
                else if(y%5==0)
                    printf("+");
                else
                    printf("-");
            }
            else{
                if(point_y_value==y){
                    if(x==tan_point){
                        if(point_y_value<0 && point_y_value>-40){
                            printf("(%d,%d)P",tan_point,point_y_value);
                            y+=(5+(int)log10(x)+(int)log10(y*(-1)));
                        }
                        else if(point_y_value >0 && point_y_value <40){
                            printf("P(%d,%d)",tan_point,point_y_value);
                        }
                        else if(point_y_value == 0){
                            printf("P(%d,%d)",tan_point,point_y_value);
                            y=40;
                        }
                        else
                            y--;
                    }
                    else
                        cout<<"*";;
                }

                else if( ((x-tan_point)<=5&&(x-tan_point)>0) || ((tan_point-x)<=5&&(tan_point-x)>0) ){
                    int tans_line_y=(int)tan_value(a,b,c,d,e,tan_point)*(x-tan_point)+original_function(a,b,c,d,e,tan_point);
                    if(tans_line_y==y){
                        if((int)tan_value(a,b,c,d,e,tan_point)==0)
                            cout<<"|";
                        else if(tan_value(a,b,c,d,e,tan_point)>0 && tan_value(a,b,c,d,e,tan_point)<=10)
                            cout<<"\\";
                        else if(tan_value(a,b,c,d,e,tan_point)<0 && tan_value(a,b,c,d,e,tan_point)>=-10)
                            cout<<"/";
                        else
                            cout<<"-";
                    }
                    else if(y==0)
                        cout<<"|";
                    else
                        cout<<" ";
                }

                else if(y==0)
                    cout<<"|";
                else
                    cout<<" ";
            }
        }
        printf("\n");
    }
    return 0;
}
