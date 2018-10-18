#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
static HANDLE hConsole = 0;
static int instanceCount = 0;

void gotoxy(int x, int y)
{
    COORD coord;
    if( instanceCount == 0 )
    {
        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        instanceCount = 1;
    }
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition( hConsole, coord );
}

double tan_value(int a,int b,int c,int d,int e,int x){
    return (-1)*a*sin(b*acos(-1)*x /30)*b*acos(-1)/30 + c*cos(x*d*acos(-1)/30)*d*acos(-1)/30;
}
int original_function(int a,int b,int c,int d,int e,int x){
    return  a*cos(b*acos(-1)*x /30) + c*sin(x*d*acos(-1)/30)+e;
}
int main(){

    int a, b, c, d, e;
    int upper_x,lower_x;    //upper_x  the upper bound of x,
    cout<<"請輸入5個係數 : ";
    cin>>a>>b>>c>>d>>e;
    cout<<"請輸入x軸範圍 : ";
    int cache1,cache2;  cin>>cache1>>cache2;    upper_x=max(cache1,cache2);lower_x=min(cache1,cache2);
    int tan_point;  cout<<"請輸入所求切點的x值 : ";cin>>tan_point;if(tan_point>upper_x || tan_point<lower_x){cout<<"i want to crash ";system("pause");return 0;}
    printf("實際切線斜率 : %.6f\n",tan_value(a,b,c,d,e,tan_point));

    //graph
    //用法大概長這樣 gotoxy(40,40);putchar('*');
    cout<<"   ";
    for(int i=-39;i<40;i++){if(i%5 == 0){if(i<0){printf("%d  ",i);}else if(i==0){printf("  %d   ",i);}else{printf(" %d  ",i);}}}
    cout<<endl;//天殺的排版
    for(int i=-39;i<40;i++){if(i%5 == 0){cout<<"+";}else{cout<<"-";}}
    cout<<"Y"<<endl;
    for(int i=lower_x;i<=upper_x;i++){
        if(i%5==0){
            gotoxy(40,i-lower_x+6);
            printf("%d",i);

            if(original_function(a,b,c,d,e,i)+39>0){
                gotoxy(original_function(a,b,c,d,e,i)+39,i-lower_x+6);
                putchar('*');
            }
        }
        else{
            gotoxy(40,i-lower_x+6);
            putchar('|');

            if(original_function(a,b,c,d,e,i)+39>0){
                gotoxy(original_function(a,b,c,d,e,i)+39,i-lower_x+6);
                putchar('*');
            }
        }
    }

    //tangent line
    char element;element='-';
    if((int)tan_value(a,b,c,d,e,tan_point) == 0) element= '|';
    else if(tan_value(a,b,c,d,e,tan_point)<=10 && tan_value(a,b,c,d,e,tan_point)>0)  element = '\\';
    else if(tan_value(a,b,c,d,e,tan_point)>=-10 && tan_value(a,b,c,d,e,tan_point)<0)    element = '/';
    for(int i=5;i>-5;i--){
        //    y=m(x-a)+b
        int A=tan_point, B=original_function(a,b,c,d,e,tan_point), m=tan_value(a,b,c,d,e,tan_point);
        gotoxy((int)m*(tan_point-i-A)+B+39,tan_point-lower_x+6-i);
        putchar(element);
        //puts(element);
    }

    gotoxy(original_function(a,b,c,d,e,tan_point)+39,tan_point-lower_x+6);
    putchar('P');
    gotoxy(original_function(a,b,c,d,e,tan_point)+42,tan_point-lower_x+6);
    printf("( %d, %d )",tan_point,original_function(a,b,c,d,e,tan_point));

    for(int i=0;i<upper_x/2;i++)
        cout<<"\n";//確保fileend不要來搗蛋
    return 0;
}
