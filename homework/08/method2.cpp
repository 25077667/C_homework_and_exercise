#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
queue<double> roots;

int original_function(int a,int b,int c,int d,int e,int x){
    return  a*cos(b*acos(-1)*x /30) + c*sin(x*d*acos(-1)/30)+e;
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
int find_root(double upper_x,double lower_x){
    double preverous=lower_x;
    roots.push(lower_x);
    for(double i=lower_x*1.0; i<=upper_x; i+=0.1){
        if(original_function(i)*original_function(preverous)<0)
            roots.push(preverous);
        preverous=i;
    }
    roots.push(upper_x);
}
double integral_calc(double upper_x,double lower_x){
    return a*(power(upper_x,6)-power(lower_x,6))/6.0 + b*(power(upper_x,5)-power(lower_x,5))/5.0 + c*(power(upper_x,4)-power(lower_x,4))/4.0 + d*(power(upper_x,3)-power(lower_x,3))/3.0 + e*(power(upper_x,2)-power(lower_x,2))/2.0 + f*(upper_x-lower_x);
}
void Differential_1(int p){
    for(double i=0.1;i>=0.01;i-=0.01){
        double diff=((double)original_function(p+i)-(double)original_function(p))/i;
        printf("delta x is= %.6f¡Aresult is: %.6f\n",i,diff);
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
        printf("delta x is= %.6f¡Aresult is: %.6f\n",i,area);
    }
}
void Integral_2(double upper_x,double lower_x){
    double sum=0;
    if(roots.size()==2)
        sum+=integral_calc(upper_x,lower_x);
    else
    for(int i=0;i<=roots.size();i++){
        lower_x=roots.front();
        roots.pop();
        upper_x=roots.front();
        //cout<<lower_x<<" "<<upper_x<<endl;
        sum+=integral_calc(upper_x,lower_x);
    }
    printf("%.6f\n",sum);
}
int main()
{
    double upper_x=0,lower_x=0;
    cout<<"please input 6 coefficient:";
    cin>>a>>b>>c>>d>>e>>f;
    cout<<"please input the upper blond and the lower bound of x:";
    int cache1,cache2;  cin>>cache1>>cache2;    upper_x=max(cache1,cache2);lower_x=min(cache1,cache2);
    int tan_point;  cout<<"please input the tangent point p:";cin>>tan_point;
    find_root(upper_x,lower_x);cout<<endl;

    for(int x=-10; x<=10; x++){
        for(int y=-39; y<=40; y++){
            int point_y_value=original_function(x);
            if(x==0){
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
                            y+=(5+(int)log10(abs(x))+(int)log10(abs(y)));
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
                        cout<<"*";
                }


                else if(y==0)
                    cout<<"|";
                else
                    cout<<" ";
            }
        }
        printf("\n");
    }
    cout<<"\n\nThe result using Derivative\n";Differential_1(tan_point);
    cout<<"\n\nThe result using Differential is:";Differential_2(tan_point);
    cout<<"\n\nThe result using Riemann integral\n";Integral_1(upper_x,lower_x);
    cout<<"\n\nThe result using Integral is:";Integral_2(upper_x,lower_x);
    return 0;
}
