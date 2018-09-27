#include <bits/stdc++.h>
using namespace std;
// 這題題目有些奇怪，一般來說輸出是要求精確，題目的示範資料竟然使用float而不是double
// 導致有失精確度
// 麻煩助教參考資料：http://davidhsu666.com/archives/ieee-754/
int main(){
    double a,b,c;
    while(cin>>a>>b>>c){
        printf("長: %f\n寬: %f\n高: %f\n",a,b,c);
        printf("周長: %6f\n", (a+b)*4);
        //這邊怪怪的，題目要求的面積是甚麼面積？題目沒有寫清楚啊，面積有三種，C3取2，到底是哪一種面積？
        printf("面積: %6f\n", a*b);//就這行最有問題
        printf("表面積: %6f\n", (a*b + b*c + c*a)*2 );
        printf("體積: %6f\n", a*b*c);
    }
    return 0;
}