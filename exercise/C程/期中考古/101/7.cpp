#include <bits/stdc++.h>
using namespace std;

int main(){
    // 7 我就是不想用.c
    int k;
    cin>>k;
    int tmp = k%256;

    cout<<tmp<<endl;
    for(int i=0;i<8;i++){
        tmp>>=1;
        cout<<(tmp&1 ? '1':'0');
    }

	return 0;
}
