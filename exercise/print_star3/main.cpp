#include <bits/stdc++.h>
using namespace std;

void func(int num,char element){
    for(int i=0;i<num-2;i++){
        cout<<element;
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<element<<endl;
    }
}

int main(){
    cout<<"請輸入層數與符號:";
    int num;char element;
    cin>>num>>element;
    cout<<element<<endl;
    func(num ,element);
    for(int i=0;i<num;i++)
        cout<<element;
    return 0;
}
