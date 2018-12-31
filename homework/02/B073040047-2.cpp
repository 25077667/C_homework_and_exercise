#include <bits/stdc++.h>
using namespace std;
// 這題題目有些奇怪，一般來說輸出是要求精確，題目的示範資料竟然使用float而不是double
// 導致有失精確度
// 麻煩助教參考資料：http://davidhsu666.com/archives/ieee-754/
// 所以 double 才是好的變數宣告方式
int main(){
    double a,b,c;
    while(cin>>a>>b>>c){
        printf("長: %f\n寬: %f\n高: %f\n",a,b,c);
        printf("周長: %6f\n", (a+b+c)*4); //已更改題目：印出周長部分，請印出長方體 12個邊的長度和，範例輸出是錯誤的
        //printf("面積: %6f\n", a*b);
	//已更改題目：面積部分取消，不用列印
        printf("表面積: %6f\n", (a*b + b*c + c*a)*2 );
        printf("體積: %6f\n", a*b*c);
    }
    return 0;
}
