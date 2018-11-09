#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
static HANDLE hConsole = 0;
static int instanceCount = 0;
int a, b, c, d, e, f;

void gotoxy(int x, int y){
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
double power(double x,int n){
    //means the nth power of x
    double result=1.0;
    for(int i=0;i<n;i++)
        result*=x;
    return result;
}
double original_function(double p){
    return  a*power(p,5)+b*power(p,4)+c*power(p,3)+d*power(p,2)+ e*p + f;    //the variable p on the original function value
}
void Differential_1(int p){
    for(double i=0.1;i>=0.01;i-=0.01){
        double diff=((double)original_function(p+i)-(double)original_function(p))/i;
        printf("%.6f\n",diff);
    }
}
void Differential_2(int p){
    double diff=5*a*power(p,4)+4*b*power(p,3)+3*c*power(p,2)+2*d*p+e;
    printf("%.6f\n",diff);  //p is the tangent point p
}
void Integral_1(int upper_x,int lower_x){
    for(double i=0.1;i>=0.01;i-=0.01){
        double area=0;
        for(double j=lower_x*1.0;j<upper_x;j+=i){
            area+=i*original_function(j);
        }
        printf("%.6f\n",area);
    }
}
void Integral_2(int upper_x,int lower_x){
    printf("%.6f\n",a*power(upper_x-lower_x,6)/6.0 + b*power(upper_x-lower_x,5)/5.0 + c*power(upper_x-lower_x,4)/4.0 + d*power(upper_x-lower_x,3)/3.0 + e*power(upper_x-lower_x,2)/2.0 + f*(upper_x-lower_x));
}

int main(){

    int upper_x=0,lower_x=0;    //upper_x  the upper bound of x,
    cout<<"please input 6 coefficient:";//input 5 coefficient
    cin>>a>>b>>c>>d>>e>>f;
    int tan_point;  cout<<"please input the tangent point p:";cin>>tan_point;
    cout<<"please input the upper blond and the lower bound of x:";//input the range which you want
    int cache1,cache2;  cin>>cache1>>cache2;    upper_x=max(cache1,cache2);lower_x=min(cache1,cache2);if(tan_point>upper_x || tan_point<lower_x){cout<<"i want to crash ";system("pause");return 0;}  //make sure upper bound and lower bound is max and min

    //graph
    //用法大概長這樣 gotoxy(40,40);putchar('*');
    cout<<"   ";
    for(int i=-39;i<40;i++){if(i%5 == 0){if(i<0){printf("%d  ",i);}else if(i==0){printf("  %d   ",i);}else{printf(" %d  ",i);}}}
    cout<<endl;//i hate typesetting
    for(int i=-39;i<40;i++){if(i%5 == 0){cout<<"+";}else{cout<<"-";}}
    cout<<"Y"<<endl;
    for(int i=lower_x;i<=upper_x;i++){
        if(i%5==0){
            gotoxy(40,abs(i-lower_x+6));
            printf("%d",i);

            if(original_function(i)+39>0 && original_function(i) <41){
                gotoxy(original_function(i)+39,abs(i-lower_x+6));
                putchar('*');
            }
        }
        else{
            gotoxy(40,abs(i-lower_x+6));
            putchar('|');

            if(original_function(i)+39>0 && original_function(i) <41){
                gotoxy(original_function(i)+39,abs(i-lower_x+6));
                putchar('*');
            }
        }
    }

    for(int i=0;i<(abs(upper_x)+abs(lower_x));i++)
        cout<<"\n";//make sure file end do not cause trouble

    cout<<"\n\nThe result of Differential_1:\n";Differential_1(tan_point);
    cout<<"\n\nThe result of Differential_2:\n";Differential_2(tan_point);
    cout<<"\n\nThe result of Integral_1:\n";Integral_1(upper_x,lower_x);
    cout<<"\n\nThe result of Integral_2:\n";Integral_2(upper_x,lower_x);
    return 0;
}
