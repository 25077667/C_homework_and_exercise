#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int d[3];
int t[3];                                       //因為sort之後，d會被排序完成，這就不會是原本的數列，所以需要把原本數列先存起來在t陣列，後續標準化輸出才不會有問題
void check_triangle(){
    sort(d,d+3);                                //排序三邊長，請裝algorithm，不過為了你的方便，請裝"bits/stdc++.h"，此標頭檔依舊在附檔中
    if(d[0]+d[1]<=d[2]){
        for(int k=0;k<3;k++)cout<<t[k]<<" ";
        cout<<"不可以構成三角形"<<endl;         //跟題目一樣的標準化輸出
    }
    else{
        for(int k=0;k<3;k++)cout<<t[k]<<" ";
        cout<<"可以構成三角形"<<endl;          //跟題目一樣的標準化輸出

        for(int k=0;k<3;k++)cout<<t[k]<<" ";    //跟題目一樣的標準化輸出，先輸出三邊
        if(d[0]==d[1] && d[1]==d[2])
            cout<<"構成的為正三角形"<<endl;
        else if(( d[0]==d[1] && d[1]<d[2] ) ||( d[1]==d[2] && d[0]<d[2] ))
            cout<<"構成的為等腰三角形"<<endl;    //判斷等腰三角形，因為輸入都是整數，所以不會有等腰直角三角形的情況(證明請見國小數學)，所以不用判斷是否為直角三角形when it is isosceles triangle
        else if(d[0]*d[0] + d[1]*d[1] == d[2]*d[2])
            cout<<"構成的為直角三角形"<<endl;    //判斷直角三角形，因為輸入都是整數，所以不會有等腰直角三角形的情況(證明請見國小數學)，所以不用判斷是否為等腰三角形when it is right triangle
        else if( ( d[0]==d[1] && d[1]<d[2] )  && (d[0]*d[0] + d[1]*d[1] == d[2]*d[2]) )
            cout<<"構成的為等腰直角三角形"<<endl;//不會執行到這一行，除非GOT hijacking
        else
            cout<<"構成的為一般三角形"<<endl;
    }
}

int main(){
    //先做for迴圈，再做while迴圈，再做do-while迴圈
    //應該是 30 次，因為4.2的作業說個別使用for、do while、while，讓使用者可以重複輸入10次，所以應該是for 10次、do while 10次、while 10次
	for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            cin>>d[j];
            t[j]=d[j];
            //因為sort之後，d會被排序完成，這就不會是原本的數列，所以需要把原本數列先存起來在t陣列，後續標準化輸出才不會有問題
        }
        check_triangle();
    }

    int c=0;//迴圈計數器
    while(c<10){
        for(int j=0;j<3;j++){
            cin>>d[j];
            t[j]=d[j];
        }
        check_triangle();
        c++;
    }
    c=0;//計數器歸零
    do{
        for(int j=0;j<3;j++){
            cin>>d[j];
            t[j]=d[j];
        }
        check_triangle();
        c++;
    }while(c<10);
	return 0;
}
