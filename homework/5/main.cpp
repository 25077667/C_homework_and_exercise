#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
static HANDLE hConsole = 0;
static int instanceCount = 0;

void gotoxy(int x, int y)
{
    COORD coord;        //https://docs.microsoft.com/en-us/windows/console/coord-str
    if( instanceCount == 0 )
    {
        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        instanceCount = 1;
    }
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition( hConsole, coord ); //windows system only
}
double tan_value(int a,int b,int c,int d,int e,int x){
    return (-1)*a*sin(b*acos(-1)*x /30)*b*acos(-1)/30 + c*cos(x*d*acos(-1)/30)*d*acos(-1)/30;   //we know that arccos(-1) is equal to pi
}
int original_function(int a,int b,int c,int d,int e,int x){
    return  a*cos(b*acos(-1)*x /30) + c*sin(x*d*acos(-1)/30)+e;
}
int main(){
    int a, b, c, d, e;
    int upper_x,lower_x;    //upper_x  the upper bound of x,
    cout<<"請輸入5個係數 : ";//input 5 coefficient
    cin>>a>>b>>c>>d>>e;
    cout<<"請輸入x軸範圍 : ";//input the range which you want
    int cache1,cache2;  cin>>cache1>>cache2;    upper_x=max(cache1,cache2);lower_x=min(cache1,cache2);  //make sure upper bound and lower bound is max and min
    int tan_point;  cout<<"請輸入所求切點的x值 : ";cin>>tan_point;if(tan_point>upper_x || tan_point<lower_x){cout<<"i want to crash ";system("pause");return 0;}
    printf("實際切線斜率 : %.6f\n",tan_value(a,b,c,d,e,tan_point));

    //graph
    //用法大概長這樣 gotoxy(40,40);putchar('*');
    cout<<"   ";
    for(int i=-39;i<40;i++){if(i%5 == 0){if(i<0){printf("%d  ",i);}else if(i==0){printf("  %d   ",i);}else{printf(" %d  ",i);}}}
    cout<<endl;//i hate typesetting
    for(int i=-39;i<40;i++){if(i%5 == 0){cout<<"+";}else{cout<<"-";}}
    cout<<"Y"<<endl;
    for(int i=lower_x;i<=upper_x;i++){
        if(i%5==0){
            gotoxy(40,i-lower_x+6);
            printf("%d",i);

            if(original_function(a,b,c,d,e,i)+39>0 && original_function(a,b,c,d,e,i) <41){
                gotoxy(original_function(a,b,c,d,e,i)+39,i-lower_x+6);
                putchar('*');
            }
        }
        else{
            gotoxy(40,i-lower_x+6);
            putchar('|');

            if(original_function(a,b,c,d,e,i)+39>0 && original_function(a,b,c,d,e,i) <41){
                gotoxy(original_function(a,b,c,d,e,i)+39,i-lower_x+6);
                putchar('*');
            }
        }
    }

    //tangent line
    char element;element='-';   //initialize the element of composing tangent line
    if((int)tan_value(a,b,c,d,e,tan_point) == 0) element= '|';
    else if(tan_value(a,b,c,d,e,tan_point)<=10 && tan_value(a,b,c,d,e,tan_point)>0)  element = '\\';
    else if(tan_value(a,b,c,d,e,tan_point)>=-10 && tan_value(a,b,c,d,e,tan_point)<0)    element = '/';
    for(int i=5;i>-5;i--){
        //    y=m(x-A)+B
        int A=tan_point, B=original_function(a,b,c,d,e,tan_point), m=tan_value(a,b,c,d,e,tan_point);
        if((int)m*(tan_point-i-A)+B+39 >0 && (int)m*(tan_point-i-A)+B+39 <79){
            gotoxy((int)m*(tan_point-i-A)+B+39,tan_point-lower_x+6-i);
            putchar(element);
        }
        //puts(element);
    }
    //print the tangent point
    if(original_function(a,b,c,d,e,tan_point)>-40 && original_function(a,b,c,d,e,tan_point) <60){
        gotoxy(original_function(a,b,c,d,e,tan_point)+39,tan_point-lower_x+6);
        putchar('P');
        gotoxy(original_function(a,b,c,d,e,tan_point)+28,tan_point-lower_x+6);
        printf("( %d, %d )",tan_point,original_function(a,b,c,d,e,tan_point));  //print the tangent point coordinate
    }
    for(int i=0;i<upper_x/2;i++)
        cout<<"\n";//make sure file end do not cause trouble
    return 0;
}
